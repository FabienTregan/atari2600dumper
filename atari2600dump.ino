
/*
 * You need 21 pins, 8 of them (data) 5V tolerant. The assignments below
 * are for an stm32f103c8t6 blue pill.
 *
 * View facing console:
 *             PB0  PB1  PB11 PB10 PC15 PB14 PB15 PA8  PA9  PA10
 * --------------------------------------------------------------
 * | GND  5V   A8   A9   A11  A10  A12  D8   D7   D6   D5   D4  |
 * |
 * | A7   A6   A5   A4   A3   A2   A1   A0   D1   D2   D3   GND |
 * --------------------------------------------------------------
 *   PA7  PA6  PA5  PA4  PA3  PA2  PA1  PA0  PB4  PB3  PA15
 */

#include <ctype.h>
#include <USBComposite.h>
#include "FAT16ReadOnly.h"

USBMassStorage MassStorage;
USBCompositeSerial CompositeSerial;

#define PRODUCT_ID 0x29

FAT16RootDirEntry rootDir[4+2*FAT16_NUM_ROOT_DIR_ENTRIES_FOR_LFN(255)];

char filename[255];
char stellaFilename[255];
char stellaShortName[] = "GAME.XXX";
char info[FAT16_SECTOR_SIZE];
char index_htm[] = "<meta http-equiv=\"Refresh\" content=\"0; url='https://javatari.org/'\" />";

#define CARTRIDGE_KEEP_TIME_MILLIS 2000 // cartridge must be kept in this long to register
#define LED    PC13
#define LED_ON 0

#include "roms.h"

int gameNumber = -1;

unsigned dataPins[8] = { PB4,PB3,PA15,PA10,PA9,PA8,PB15,PB14 };
unsigned addressPins[13] = { PA0,PA1,PA2,PA3,PA4,PA5,PA6,PA7,PB0,PB1,PB11,PB10,PC15 };
unsigned romSize;
char stellaExtension[5];
const uint32_t* hotspots = NULL;
const uint32_t hotspots_F6[] = { 0xff6, 0xff7, 0xff8, 0xff9 };
const uint32_t hotspots_F8[] = { 0xff8, 0xff9 };
const uint32_t hotspots_F4[] = { 0xff4, 0xff5, 0xff6, 0xff7, 0xff8, 0xff9, 0xffa, 0xffb };
const uint32_t hotspots_FA[] = { 0xff8, 0xff9, 0xffa }; 
uint32_t numHotspots = 0;
int lastBank = -1;
uint32_t crc;
uint8_t detectBuffer[128];

// crc32 adapted from https://github.com/aeldidi/crc32/blob/master/src/crc32.c

uint32_t crc32_for_byte(uint32_t byte)
{
  const uint32_t polynomial = 0xEDB88320L;
  uint32_t       result     = byte;
  size_t         i          = 0;

  for (; i < 8; i++) {
    /* IMPLEMENTATION: the code below always shifts result right by
     * 1, but only XORs it by the polynomial if we're on the lowest
     * bit.
     *
     * This is because 1 in binary is 00000001, so ANDing the
     * result by 1 will always give 0 unless the lowest bit is set.
     * And since XOR by zero does nothing, the other half only
     * occurs when we're on the lowest bit.
     *
     * I didn't leave the above implementation in, despite being
     * faster on my machine since it is a more complex operation
     * which may be slower on less sophisticated processors. It can
     * be added in in place of the loop code below.
     */

    result = (result >> 1) ^ (result & 1) * polynomial;

    /* Here is the code I replaced with the branch I tried to
     * remove:
    if (result & 1) {
      result = (result >> 1) ^ polynomial;
      continue;
    }
    result >>= 1;
     */
  }
  return result;
}

uint32_t crc32(const void *input, size_t size, uint32_t start)
{
  const uint8_t *current = (const uint8_t*)input;
  uint32_t       result  = ~start;
  size_t         i       = 0;

  for (; i < size; i++) {
    result ^= current[i];
    result = crc32_for_byte(result);
  }

  return ~result;
}

uint32_t crcRange(uint32_t start, uint32_t count) {
  uint32_t c = 0;
  uint32_t i = start;
  uint32_t result = ~0;
  
  for (;  i < start + count ; i++) {
    result ^= read(i);
    result = crc32_for_byte(result);
  }

  return ~result;
}

uint8_t read(uint32_t address) {
  digitalWrite(addressPins[12], 0);
  for (unsigned i = 0 ; i < 13 ; i++, address >>= 1) {
    digitalWrite(addressPins[i], address & 1);
  }
  delayMicroseconds(10);
  digitalWrite(addressPins[12], 1);
  uint8_t datum = 0;
  for (int i = 7 ; i >= 0 ; i--) {
    datum = (datum << 1) | digitalRead(dataPins[i]);
  }

  return datum;
}

inline bool switchHotspot(uint32_t hotspot, bool raiseD0) {
  if (raiseD0) {
      pinMode(dataPins[0], INPUT_PULLUP); // D0 must be high to switch banks on FA: https://patents.google.com/patent/US4485457A/en
      read(hotspot);
      pinMode(dataPins[0], INPUT);       
  }
  else {
      read(hotspot);
  }
}

uint8_t bankedRead(uint32_t address) {
  if (numHotspots == 0)
    return read(address);
  int bank = address / 4096;
  if (bank != lastBank) {
    switchHotspot(hotspots[bank], hotspots == hotspots_FA);
    lastBank = bank;
  }
  uint16_t maskedAddress = address % 4096;
  uint8_t value = read(maskedAddress);
  // check if what we read is one of the hotspots, so that
  // we unintentionally swapped banks
  for (int i=0; i<numHotspots; i++) {
    if (hotspots[i] == maskedAddress) {
     lastBank = i;
     break;
    }
  }
  return value;
}

uint32_t romCRC(unsigned start, unsigned count) {
  uint32_t c = 0;
  uint32_t result = ~0;
  unsigned i = start;

  for (;  i < count ; i++) {
    result ^= bankedRead(i);
    result = crc32_for_byte(result);
  }

  return ~result;
}

bool diff(uint32_t hotspot1,uint32_t hotspot2, bool D0) {
  // sample memory space every 37 bytes, skipping a potential RAM space at the beginning; this is nearly certain to pick up a difference 
  // between banks if there is a difference
  // detectBuffer is large enough for this sampling
  switchHotspot(hotspot1, D0);
  for (unsigned i=256,j=0;i<0x0FF0; (i+=37),j++)
    detectBuffer[j] = read(i);
  switchHotspot(hotspot2, D0);
  for (unsigned i=256,j=0;i<0x0FF0; (i+=37),j++)
    if (detectBuffer[j] != read(i))
      return true;
  return false;
}

bool detectExtraRAM() {
  // if the first 128 bytes don't change between banks, they're probably RAM
  // TODO: smarter way to check!
  if (hotspots == hotspots_FA)
    return true;
  if (numHotspots == 0)
    return false;
  read(hotspots[0]);
  for (unsigned i=0; i<128; i++)
    detectBuffer[i] = read(i);
  for (unsigned j=1; j<numHotspots; j++) {
    read(hotspots[j]);
    for (unsigned i=0; i<128; i++)
      if (detectBuffer[i] != read(i))
        return false;
  }
}

void dataPinState(WiringPinMode state) {
  for (unsigned i = 0 ; i < 8 ; i++)
    pinMode(dataPins[i], state);  
}

bool detectCartridge(void) {
  dataPinState(INPUT_PULLUP);
  uint16_t reset = read(0xFFC) | ((uint16_t)read(0xFFD)<<8);
  dataPinState(INPUT);
  return reset != 0xFFFF;
}

bool check2k(void) {
  for (unsigned i = 0 ; i < 2048 ; i++)
    if (read(i) != read(i+2048))
      return false;
  return true;
}

void identifyCartridge() {
  const char* msg = NULL;
  bool checkRAM = false;
  strcpy(info, "Cartridge type: ");
  if (diff(hotspots_F4[0],hotspots_F4[7],false)) {
    hotspots = hotspots_F4;
    numHotspots = sizeof(hotspots_F4)/sizeof(*hotspots_F4);
    strcat(info, "F4");
    strcpy(stellaExtension, ".f4");
    romSize = numHotspots * 4096;
    checkRAM = true;
  }
  else if (diff(hotspots_F6[0],hotspots_F6[1],false)) {
    hotspots = hotspots_F6;
    numHotspots = sizeof(hotspots_F6)/sizeof(*hotspots_F6);
    strcpy(stellaExtension, ".f6");
    strcat(info, "F6");
    romSize = numHotspots * 4096;
    checkRAM = true;
  }
  else if (diff(hotspots_FA[1],hotspots_FA[2],true)) {
    hotspots = hotspots_FA;
    numHotspots = sizeof(hotspots_FA)/sizeof(*hotspots_FA);
    strcpy(stellaExtension, ".fa");
    strcat(info, "FA");
    romSize = numHotspots * 4096; 
    checkRAM = true;
  } 
  else if (diff(hotspots_F8[0],hotspots_F8[1],false)) {
    hotspots = hotspots_F8;
    numHotspots = sizeof(hotspots_F8)/sizeof(*hotspots_F8);
    strcpy(stellaExtension, ".f8");
    strcat(info, "F8");
    romSize = numHotspots * 4096;
    checkRAM = true;
  }
  else {
    hotspots = NULL;
    numHotspots = 0;
    if (check2k()) {
      strcpy(stellaExtension, ".2k");
      strcat(info, "2K");
      romSize = 2048;      
    }
    else {
      strcpy(stellaExtension, ".4k");
      strcat(info, "4K");
      romSize = 4096;
    }
  }
  if (checkRAM && detectExtraRAM()) {
    strcat(info, "SC");
    strcat(stellaExtension, "s");
  }
  lastBank = -1;
  crc = romCRC(0, romSize);
  gameNumber = -1;
  for (int i = 0 ; i < sizeof database / sizeof *database ; i++) {
    if (romSize == database[i].size && crc == database[i].crc) {
      gameNumber = i;
      break;
    }
  }
  sprintf(info+strlen(info), "\r\nSize: %u\nCRC-32: %08x\nGame: %s\n", 
    romSize,
    crc,
    gameNumber < 0 ? "unidentified" : database[gameNumber].name);
  if (gameNumber < 0) {
    strcpy(filename, "game.a26");
    strcpy(stellaFilename, "game");
  }
  else {
    strcpy(filename, database[gameNumber].name);
    strcat(filename, ".a26");
    strcpy(stellaFilename, database[gameNumber].name);
  }
  strcat(stellaFilename, stellaExtension);
  const char* p = stellaExtension;
  char* q = stellaShortName + 4;
  while (*p) {
    char c = *p++;
    *q++ = toupper(c);
  }
  *q = 0;
}

bool write(const uint8_t *writebuff, uint32_t memoryOffset, uint16_t transferLength) {
  return false;
}

bool fileReader(uint8_t *buf, const char* name, uint32_t sector, uint32_t sectorCount) {
  if (!strcmp(name,"GAME.A26") || !strcmp(name,stellaShortName)) {
    uint32_t size = sectorCount * FAT16_SECTOR_SIZE;
    uint32_t start = sector * FAT16_SECTOR_SIZE;
    for (unsigned i = 0 ; i < size ; i++)
      buf[i] = bankedRead(start + i);
    return true;
  }
  else if (!strcmp(name,"INFO.TXT")) {
    strcpy((char*)buf, info);
    return true;
  }
  else if (!strcmp(name,"INDEX.HTM")) {
    strcpy((char*)buf, index_htm);
    return true;
  }
  return false;
}

void waitForCartridge() {
  while (true) {
    uint32_t start = millis();
    while (detectCartridge()) {
      if (millis() - start >= CARTRIDGE_KEEP_TIME_MILLIS)
        return;
    }
  }
}

void setup() {
  dataPinState(INPUT);
  for (unsigned i = 0 ; i < 13 ; i++)
    pinMode(addressPins[i], OUTPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED,!LED_ON);
  waitForCartridge();
  identifyCartridge();
  digitalWrite(LED,LED_ON);

  FAT16SetRootDir(rootDir, sizeof(rootDir)/sizeof(*rootDir), fileReader);
  FAT16AddFile("INDEX.HTM", strlen(index_htm));
  FAT16AddFile("INFO.TXT", strlen(info)); // room for CRC-32 and crlf
  FAT16AddLFN("GAME.A26", filename);
  FAT16AddFile("GAME.A26", romSize);
  FAT16AddLFN(stellaShortName, stellaFilename);
  FAT16AddFile(stellaShortName, romSize);

  USBComposite.setProductId(PRODUCT_ID);
  MassStorage.setDriveData(0, FAT16_NUM_SECTORS, FAT16ReadSector, write);
  MassStorage.registerComponent();

  USBComposite.begin();
  while(!USBComposite);  
}


void loop() {
  if (!detectCartridge())
    nvic_sys_reset();
  MassStorage.loop();
}


// ET = c3e930e6
