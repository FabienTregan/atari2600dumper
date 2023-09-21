static const struct {
    const char* name;
    uint16_t size;
    uint32_t crc;
} __packed database[] = {
//{ "E.T. - The Extra-Terrestrial (USA)", 8192, 0x6D0A475F },
{ "3-D Genesis (USA) (Proto)", 8192, 0x931A0BDC }, 
{ "3-D Ghost Attack (USA) (Proto)", 16384, 0x11396D94 }, 
{ "3-D Havoc (USA) (Proto)", 8192, 0xF75DDAD1 },
{ "3-D Tic-Tac-Toe (Europe)", 2048, 0x7322EBC6 },
{ "3-D Tic-Tac-Toe (USA)", 2048, 0x58805709 },
{ "3-D Zapper (USA) (Proto) (1982-12-15)", 4096, 0x93C49A58 },
{ "3-D Zapper (USA) (Proto) (Earlier)", 4096, 0x4F405595 }, 
{ "4 Game in One (Europe) (Bit Corporation)", 4096, 0x23A8D1AF },
{ "Abre-te, Sesamo! (Brazil) (En) (Unl)", 4096, 0x8CF511A4 },
{ "Acid Drop (Europe)", 16384, 0x14CDDAC7 },
{ "Action Man - Action Force (Europe)", 4096, 0x896446CF },
{ "Actionauts (USA) (Proto) (1984-06-22)", 4096, 0xCEDDF26B },
{ "Activision Decathlon, The (Europe)", 8192, 0x2452ADAB },
{ "Activision Decathlon, The (France)", 8192, 0x716D9D1D },
{ "Activision Decathlon, The (USA)", 8192, 0x3FEB39B1 },
{ "Adventure (Europe)", 4096, 0x18DC23F9 },
{ "Adventure (USA)", 4096, 0xA6DB4B3A },
{ "Adventures of TRON (USA)", 4096, 0x1B8019D6 },
{ "Air Raid (USA)", 4096, 0xB0E53814 },
{ "Air Raiders (Europe)", 4096, 0x42395399 },
{ "Air Raiders (USA)", 4096, 0xBB16539D },
{ "Air-Sea Battle (Europe)", 2048, 0xCF7F8944 },
{ "Air-Sea Battle ~ Target Fun (Japan, USA) (En)", 2048, 0x1FC6C0F1 },
{ "Air-Sea Battle ~ Target Fun (Japan, USA) (En) (Atari Anthology)", 2048, 0x2A2A9F81 },
{ "Airlock (Europe)", 4096, 0xA2D4390B },
{ "Airlock (USA)", 4096, 0x25C90CE7 },
{ "Airlock (USA) (Proto)", 4096, 0xB6AE31C6 },
{ "Alien (Brazil) (En) (Unl)", 4096, 0xE61021EC },
{ "Alien (USA)", 4096, 0x6D61059F },
{ "Alien's Return (Europe)", 4096, 0xC161F53B },
{ "Alligator People (USA) (Proto)", 4096, 0xB3F6D395 },
{ "Alpha Beam (Europe) (Beta) (1983-06-03)", 8192, 0x1651F45E },
{ "Alpha Beam (Japan, USA) (En) (Beta) (1982-12-22)", 8192, 0x85F1CB08 },
{ "Alpha Beam with Ernie (Europe)", 8192, 0xD1ED3112 },
{ "Alpha Beam with Ernie (Japan, USA) (En)", 8192, 0x27C6B897 },
{ "Amidar (Europe)", 4096, 0xE9B05565 },
{ "Amidar (USA)", 4096, 0x8EB5BD72 },
{ "AndroMan on the Moon (USA) (Proto)", 8192, 0x18344A20 },
{ "Apples and Dolls (Brazil) (En) (Unl)", 4096, 0xE7514705 },
{ "Aquaventure (Brazil) (En) (Proto) (Unl)", 8192, 0x7FA61FA0 },
{ "Aquaventure (USA) (Proto) (1983-08-12)", 8192, 0x87A8CB8B },
{ "Armor Ambush (Europe)", 4096, 0xC974C21A },
{ "Armor Ambush (USA)", 4096, 0xFC35704B },
{ "Artillery Duel (Europe)", 8192, 0x1708647C },
{ "Artillery Duel (USA)", 8192, 0x1D0F7E8D },
{ "Assault (USA)", 4096, 0xAB3A2B77 },
{ "Asteroids (Europe)", 8192, 0x0A2F8288 },
{ "Asteroids (Japan, USA) (En)", 8192, 0xC7D64C94 },
{ "Asteroids (USA) (Atari Anthology)", 8192, 0x70A59647 },
{ "Astroblast (Europe)", 4096, 0xA1DF435E },
{ "Astroblast (USA)", 4096, 0xD214F241 },
{ "Astroblast (USA) (v1.1)", 4096, 0x1DE25331 },
{ "Astrowar (Brazil) (En) (Unl)", 4096, 0x7B4B7EAF },
{ "Atari Video Cube (USA)", 4096, 0x272AE37F },
{ "Atari Video Cube (USA, Europe) (Atari Anthology)", 4096, 0x8172299E },
{ "Atlantis (Europe)", 4096, 0x85706802 },
{ "Atlantis (USA)", 4096, 0x92560498 },
{ "Atlantis II (USA)", 4096, 0xBA5566AA },
{ "Atom Smasher (USA) (Proto)", 8192, 0xF2456E02 },
{ "BASIC Programming (Europe)", 4096, 0xC207F43E },
{ "BASIC Programming (USA)", 4096, 0x26A3C844 },
{ "BMX Air Master (Australia)", 16384, 0x02838B54 },
{ "BMX Air Master (Europe)", 16384, 0xDB722DD7 },
{ "BMX Air Master (USA)", 16384, 0xB4017EE3 },
{ "Bachelor Party (USA)", 4096, 0xD9CD6C95 },
{ "Bachelorette Party (USA)", 4096, 0xE8189EEB },
{ "Backgammon (Europe)", 4096, 0xA3D119C6 },
{ "Backgammon (USA)", 4096, 0xE2A7FFA6 },
{ "Bank Heist (Europe)", 4096, 0x47D4B652 },
{ "Bank Heist (USA)", 4096, 0x7AA79D1E },
{ "Barnstorming (Brazil) (En) (Unl)", 4096, 0x281736D6 },
{ "Barnstorming (Europe)", 4096, 0xF866DBF7 },
{ "Barnstorming (USA)", 4096, 0x4A005181 },
{ "Base Attack (Europe)", 4096, 0x81F1E5DD },
{ "Baseball (USA) (Activision Anthology - Remix Edition)", 16384, 0xEF851FA2 },
{ "Basic Math (Europe)", 2048, 0x5456CDCA },
{ "Basic Math (USA)", 2048, 0xD48EBAC0 },
{ "Basketball (Europe)", 2048, 0x711A2340 },
{ "Basketball (USA)", 2048, 0xB31D49F0 },
{ "Battlezone (Europe)", 8192, 0x5CC921F6 },
{ "Battlezone (Japan, USA) (En)", 8192, 0x9155DD1D },
{ "Battlezone (Japan, USA) (En) (Beta) (1983-05-02)", 8192, 0xC1E6D7CF },
{ "Battlezone (Japan, USA) (En) (Beta) (1983-05-12)", 8192, 0x63F31AF6 },
{ "Beamrider (Europe)", 8192, 0x6ED2E636 },
{ "Beamrider (USA)", 8192, 0x1618565B },
{ "Beany Bopper (Brazil) (En) (Unl)", 4096, 0x624C9345 },
{ "Beany Bopper (USA)", 4096, 0xB722BC8F },
{ "Beat'Em & Eat'Em (Brazil) (En) (Unl)", 4096, 0xE4F66058 },
{ "Beat'Em & Eat'Em (Europe)", 4096, 0x461C9F2C },
{ "Beat'Em & Eat'Em (USA)", 4096, 0xC90D4F84 },
{ "Berenstain Bears (USA)", 8192, 0x29D28BAF },
{ "Bermuda Triangle (Europe)", 4096, 0xA8C0AEC9 },
{ "Bermuda Triangle (USA)", 4096, 0x0FCB5B94 },
{ "Berzerk (Brazil) (En) (Unl)", 4096, 0xF973D708 },
{ "Berzerk (Europe)", 4096, 0xD7F66624 },
{ "Berzerk (Japan, USA) (En)", 4096, 0x2E8B4B5F },
{ "Big Bird's Egg Catch (Europe)", 8192, 0xB0555578 },
{ "Big Bird's Egg Catch (Japan, USA) (En)", 8192, 0x96DC9A9C },
{ "Big Bird's Egg Catch (Japan, USA) (En) (Beta) (1982-12-08)", 8192, 0x9DE03520 },
{ "Big Bird's Egg Catch (Japan, USA) (En) (Beta) (1983-05-02)", 8192, 0xEEB65EFA },
{ "Big Bird's Egg Catch (Japan, USA) (En) (Beta) (1983-05-17)", 8192, 0x3A4038AC },
{ "Bionic Breakthrough (USA) (Proto)", 8192, 0x928E4B47 },
{ "Birthday Mania (USA) (Robert A. Tokar)", 4096, 0xA9400431 },
{ "Black Jack (Europe)", 2048, 0x7125A8B9 },
{ "Black Jack (USA)", 2048, 0x4B0EE010 },
{ "Bloody Human Freeway (USA) (Proto)", 2048, 0x7AFB2277 },
{ "Blueprint (Europe)", 8192, 0x71139A5E },
{ "Blueprint (USA)", 8192, 0xDA7B9DFA },
{ "Blueprint (USA) (Beta)", 8192, 0x5A95A4F4 },
{ "Bobby Is Going Home (Brazil) (En) (NTSC) (Unl)", 4096, 0x358940E3 },
{ "Bobby Is Going Home (Brazil) (En) (PAL) (Unl)", 4096, 0x5C4A04C8 },
{ "Bobby Is Going Home (Europe)", 4096, 0xF061E27F },
{ "Bobby Is Going Home (Europe) (Beta)", 4096, 0x3E662128 },
{ "Bobby Is Going Home (USA)", 4096, 0x99A2A654 },
{ "Boggle (USA) (Proto) (1978-08-07)", 2048, 0x26B6BFEF },
{ "Boing! (Europe)", 4096, 0xD2F06299 },
{ "Boing! (USA)", 4096, 0xAD380487 },
{ "Bouncin' Baby Bunnies (USA) (Proto)", 4096, 0x09A70E23 },
{ "Bowling (Europe)", 2048, 0xC7BC1BCA },
{ "Bowling (USA)", 2048, 0xFEA0D6D5 },
{ "Boxen (Germany) (En)", 2048, 0x7931C845 },
{ "Boxing (Brazil) (En) (Unl)", 2048, 0x0411AE6B },
{ "Boxing (Europe)", 2048, 0x515036F1 },
{ "Boxing (USA)", 2048, 0x9ECE0021 },
{ "Brain Games (Europe)", 2048, 0xEA630E68 },
{ "Brain Games (USA)", 2048, 0x150709C2 },
{ "Breakout (Europe)", 2048, 0x33717471 },
{ "Breakout ~ Breakaway IV (Japan, USA) (En)", 2048, 0x3037638C },
{ "Bridge (Europe)", 4096, 0x63CEEB81 },
{ "Bridge (USA)", 4096, 0x9C71D175 },
{ "Bridge (USA) (v1.1)", 4096, 0x8DB95D1E },
{ "Buck Rogers - Planet of Zoom (Europe)", 8192, 0xF8B140FA },
{ "Buck Rogers - Planet of Zoom (USA)", 8192, 0x2030F686 },
{ "Bugs (Europe)", 4096, 0xD1DDB571 },
{ "Bugs (USA)", 4096, 0x1202427C },
{ "Bugs Bunny (USA) (Proto 1)", 8192, 0x272B8856 },
{ "Bugs Bunny (USA) (Proto 2)", 8192, 0xBD164019 },
{ "Bump 'n' Jump (Europe)", 8192, 0x194F3576 },
{ "Bump 'n' Jump (USA)", 8192, 0x0209C0E5 },
{ "Bumper Bash (Europe)", 4096, 0x863248FC },
{ "Bumper Bash (USA)", 4096, 0xB1A6A23E },
{ "BurgerTime (USA)", 16384, 0xC183FBBC },
{ "Burning Desire (Europe)", 4096, 0xF2593D9B },
{ "Burning Desire (USA)", 4096, 0x92F91D36 },
{ "Cabbage Patch Kids - Adventures in the Park (USA) (Proto) (1984-09-13)", 8192, 0x7025D30D },
{ "Cakewalk (Europe)", 4096, 0x26C5B6BD },
{ "Cakewalk (USA)", 4096, 0x73494211 },
{ "California Games (Europe)", 16384, 0xC53D0352 },
{ "California Games (USA)", 16384, 0xE9A3FDC3 },
{ "Canyon Bomber (USA)", 2048, 0xE914B8CA },
{ "Care Bears (USA) (Proto)", 4096, 0xA14A81D1 },
{ "Carnival (Europe)", 4096, 0xFB7E75A1 },
{ "Carnival (USA)", 4096, 0x7AC3C700 }, 
{ "Casino (Europe)", 4096, 0x675C7F84 },
{ "Casino ~ Poker Plus (USA)", 4096, 0x420B8248 },
{ "Cat Trax (USA)", 4096, 0xC847E5EC },
{ "Cathouse Blues (USA)", 4096, 0x3C4E3F41 },
{ "Centipede (Europe)", 8192, 0x44D16280 },
{ "Centipede (Europe) (Beta)", 8192, 0xAAE78B7F },
{ "Centipede (Japan, USA) (En)", 8192, 0x77396102 },
{ "Challenge (Canada)", 4096, 0x1F19AA5D },
{ "Challenge of.... NEXAR, The (Europe)", 4096, 0x44EF0404 },
{ "Challenge of.... NEXAR, The (USA)", 4096, 0x74CC37D4 },
{ "Championship Soccer (Europe)", 4096, 0xBE28F033 },
{ "Championship Soccer ~ Soccer (USA)", 4096, 0x3F59BB60 },
{ "Chase the Chuck Wagon (USA)", 4096, 0x63E4FC7F },
{ "Checkers (USA)", 2048, 0xE74F1B59 },
{ "China Syndrome (Europe)", 4096, 0x7690B0C3 },
{ "China Syndrome (USA)", 4096, 0xA714E79C },
{ "Chopper Command (Europe)", 4096, 0x6BE865A5 },
{ "Chopper Command (USA)", 4096, 0x1DFA64DF },
{ "Chuck Norris Superkicks (USA)", 8192, 0x96210C6C },
{ "Circus Atari (Europe)", 4096, 0x95C9FE2B },
{ "Circus Atari (Japan, USA) (En)", 4096, 0xD2A330A3 },
{ "Coco Nuts (USA)", 4096, 0xB3E44E5C },
{ "Codebreaker (Europe)", 2048, 0xB1CB7CDC },
{ "Codebreaker (USA)", 2048, 0x947EDB18 },
{ "Col 'N' (Europe) (Unl)", 4096, 0x6E493F49 },
{ "Color Bar Generator (USA)", 4096, 0x19B52142 },
{ "Colors (Europe) (Proto)", 2048, 0x4D8A1F6B },
{ "Colours (USA, Europe) (Atari Anthology)", 2048, 0x30464C79 },
{ "Combat (Europe)", 2048, 0x7BEE5800 },
{ "Combat (USA, Europe) (Atari Anthology)", 2048, 0x0D64A9C5 },
{ "Combat Two (USA) (Proto)", 8192, 0x8CABE1FD },
{ "Combat ~ Tank-Plus (USA)", 2048, 0x9C326A97 },
{ "Commando (Europe)", 16384, 0xB898762D },
{ "Commando (USA)", 16384, 0x8D3025DC },
{ "Commando (USA) (Alt)", 16384, 0x2C698B31 },
{ "Commando Raid (Europe)", 4096, 0xA3EE754E },
{ "Commando Raid (USA)", 4096, 0xE46583E6 },
{ "Communist Mutants from Space (Europe)", 8448, 0xE8C4DC94 },
{ "Communist Mutants from Space (Europe) (Beta)", 8448, 0xD1A5B3BB },
{ "Communist Mutants from Space (USA)", 8448, 0xD64EC816 },
{ "Communist Mutants from Space (USA) (Beta)", 8448, 0xCA6BB788 },
{ "Computer Chess (USA) (Proto)", 4096, 0x0C44D49A },
{ "Condor Attack (USA)", 4096, 0xB6C582EB },
{ "Confrontation (USA) (Proto)", 4096, 0xC2DBCEFE },
{ "Congo Bongo (USA)", 8192, 0x3F6E7E0C },
{ "Cookie Monster Munch (USA)", 8192, 0x97BA488F },
{ "Cosmic Ark (USA)", 4096, 0xCB374F0E },
{ "Cosmic Commuter (USA)", 4096, 0x4939BA40 },
{ "Cosmic Creeps (USA)", 4096, 0x47AAA2DD },
{ "Cosmic Swarm (USA)", 2048, 0x27F1AE48 },
{ "Crack'ed (USA) (Proto)", 16384, 0x1B5E52A7 },
{ "Crackpots (USA)", 4096, 0xECD891B3 },
{ "Crash Dive (USA)", 4096, 0x59FE4666 },
{ "Crazy Climber (USA)", 8192, 0xA3A3C009 },
{ "Cross Force (USA)", 4096, 0x41B0D615 },
{ "Crossbow (USA)", 16384, 0x1F233140 },
{ "Crypts of Chaos (USA)", 4096, 0xC5B29962 },
{ "Crystal Castles (USA)", 16384, 0x9007B5AC },
{ "Cubicolor (USA) (Proto)", 4096, 0xD5D43A7A },
{ "Custer's Revenge (USA)", 4096, 0x21283941 },
{ "Dancing Plate (USA)", 4096, 0x250C4E3F },
{ "Dark Cavern (USA)", 4096, 0x0481078C },
{ "Dark Chambers (USA)", 16384, 0x83900281 },
{ "Deadly Duck (USA)", 4096, 0xF33A9A2D },
{ "Death Trap (USA)", 4096, 0xFDF79A60 },
{ "Defender (USA)", 4096, 0x0DF43D8E },
{ "Demolition Herby (USA)", 4096, 0xE9305AE2 },
{ "Demon Attack (USA) (Rev 1)", 4096, 0x31C9DF5E },
{ "Demons to Diamonds (USA)", 4096, 0x9B97C3DA },
{ "Depth Charge (USA) (Proto)", 4096, 0x442D6289 },
{ "Desert Falcon (USA)", 16384, 0xCAA0054E },
{ "Dice Puzzle (Europe)", 4096, 0xF691B853 },
{ "Dice Puzzle (USA)", 4096, 0x8D05D61B },
{ "Dig Dug (USA)", 16384, 0xEE7B80D1 },
{ "Dishaster (USA)", 4096, 0xC8150316 },
{ "Dodge 'Em (Europe)", 4096, 0x10CFC6C0 },
{ "Dodge 'Em ~ Dodger Cars (USA)", 4096, 0x0C74479B },
{ "Dolphin (USA)", 4096, 0x9E38A7B9 },
{ "Donald Duck's Speedboat (USA) (Proto)", 8192, 0x8DB92C76 },
{ "Donkey Kong (USA)", 4096, 0xF331B069 },
{ "Donkey Kong Junior (USA)", 8192, 0x9EF649E5 },
{ "Double Dragon (USA)", 16384, 0x8320BB37 },
{ "Double Dunk (USA)", 16384, 0x208F6C20 },
{ "Dragon Defender (Europe)", 4096, 0x0D57E23D },
{ "Dragonfire (USA)", 4096, 0xBA5DC02C },
{ "Dragonstomper (USA)", 25344, 0x291F7F92 },
{ "Dragster (USA)", 2048, 0x4042D3AB },
{ "Dukes of Hazzard (USA) (Proto)", 16384, 0x2DB406DC },
{ "Dumbo's Flying Circus (USA) (Proto)", 8192, 0xAE915725 },
{ "Dune (USA) (Proto)", 8192, 0xF01F7C55 },
{ "E.T. - The Extra-Terrestrial (USA)", 8192, 0x6D0A475F },
{ "Earth Dies Screaming, The (USA)", 4096, 0x8A6C65F0 },
{ "Eggomania (USA)", 4096, 0xC78EC927 },
{ "Elevator Action (USA) (Proto)", 8192, 0xDC5A9D77 },
{ "Elf Adventure (USA) (Proto)", 4096, 0x91647218 },
{ "Eli's Ladder (USA)", 4096, 0x2C5E6932 },
{ "Elk Attack (USA) (Proto)", 8192, 0x02DDDE9F },
{ "Encounter at L-5 (USA)", 4096, 0xE78FE552 },
{ "Enduro (USA)", 4096, 0x2EF17B2E },
{ "Entity, The (USA) (Proto)", 4096, 0x3366CCB7 },
{ "Entombed (USA)", 4096, 0xE48EC9DC },
{ "Espial (USA)", 8192, 0x1F95351A },
{ "Exocet (Europe)", 4096, 0x5CC39028 },
{ "Extra Terrestrials (USA)", 4096, 0x3889D018 },
{ "Fantastic Voyage (USA)", 4096, 0xA60E153F },
{ "Farmyard Fun (USA)", 4096, 0x73474B03 },
{ "Fast Eddie (USA)", 4096, 0x0C0A7A02 },
{ "Fast Food (USA)", 4096, 0x62388455 },
{ "Fatal Run (Europe)", 32768, 0x991D2348 },
{ "Fatal Run (USA)", 32768, 0x60B08497 },
{ "Fathom (USA)", 8192, 0x93DA13CC },
{ "Final Approach (USA)", 4096, 0xFF23F469 },
{ "Fire Fighter (USA)", 4096, 0xE361FB42 },
{ "Fire Fly (USA)", 4096, 0x7A8E4EC7 },
{ "Fire Spinner (USA)", 4096, 0xF497456E },
{ "Fireball (USA)", 8448, 0xB32AE162 },
{ "Fishing Derby (USA)", 2048, 0x204C928F },
{ "Flag Capture ~ Capture (USA)", 2048, 0x8AA1C41E },
{ "Flash Gordon (USA)", 4096, 0x0D61CE7D },
{ "Football (USA)", 2048, 0x3B73EE02 },
{ "Forest (Europe)", 4096, 0x1AAAB749 },
{ "Frankenstein's Monster (USA)", 4096, 0xAD44DFF9 },
{ "Freeway (USA)", 2048, 0xB13EC413 },
{ "Frisco (USA)", 4096, 0xC4F16D4D },
{ "Frog Demo (Europe)", 2048, 0xEC5FF220 },
{ "Frog Pond (USA) (Proto)", 8192, 0x5874385A },
{ "Frogger (USA)", 4096, 0xF5E1AF92 },
{ "Frogger II - Threeedeep! (USA)", 8192, 0x3BA0D9BF },
{ "Frogs and Flies (USA)", 4096, 0x6476C136 },
{ "Front Line (USA)", 8192, 0xC352F290 },
{ "Frostbite (USA)", 4096, 0xB61BE7A3 },
{ "Funky Fish (USA) (Proto)", 8192, 0xB53B33F1 },
{ "G.I. Joe - Cobra Strike (USA)", 4096, 0x6BCBCD37 },
{ "Galaxian (USA)", 8192, 0x4E9FE271 },
{ "Gamma-Attack (USA)", 2048, 0xD1EFE8BB },
{ "Gangster Alley (USA)", 4096, 0x03C2452C },
{ "Garfield (USA) (Proto)", 16384, 0xF20CADCF },
{ "Gas Hog (USA)", 4096, 0x40699CA5 },
{ "Gauntlet (USA)", 4096, 0xC7AC23C7 },
{ "Ghost Manor (USA)", 8192, 0x6FC46219 },
{ "Ghostbusters (USA)", 8192, 0x45443D13 },
{ "Ghostbusters II (Europe)", 16384, 0xA3C342B8 },
{ "Gigolo (USA)", 4096, 0x4E16A8DC },
{ "Glacier Patrol (USA)", 4096, 0x44E77FD6 },
{ "Glib - Video Word Game (USA)", 4096, 0x50BB03A4 },
{ "Going-Up (USA) (Proto)", 8448, 0xCB864B21 },
{ "Golf (USA)", 2048, 0x46A9F200 },
{ "Good Luck, Charlie Brown (USA) (Proto)", 8192, 0xB89AAEAF },
{ "Gopher (USA)", 4096, 0xAC8321D8 },
{ "Gorf (USA)", 4096, 0x9BD137AA },
{ "Grand Prix (USA)", 4096, 0xE855273D },
{ "Gravitar (USA)", 8192, 0xC87FCCBE }, 
{ "Great Escape (Europe)", 4096, 0x58010BE3 },
{ "Great Escape (USA)", 4096, 0x99C240C1 },
{ "Gremlins (USA)", 8192, 0x48D5991F },
{ "Grover's Music Maker (USA) (Proto)", 8192, 0xE1372B28 },
{ "Guardian (USA)", 4096, 0x121738F5 },
{ "Gyruss (USA)", 8192, 0x0D78E8A9 },
{ "H.E.R.O. (USA)", 8192, 0x721E95B7 },
{ "Halloween (USA)", 4096, 0xB1B11806 },
{ "Hangman ~ Spelling (USA)", 4096, 0xC2BCC789 },
{ "Hard-Head (USA) (Proto)", 4096, 0x5C009EA0 },
{ "Harem (USA) (Proto)", 4096, 0xE4466537 },
{ "Haunted House (USA)", 4096, 0xAA62D961 },
{ "Hell Driver (Europe)", 4096, 0x18954066 },
{ "Hole Hunter (USA)", 4096, 0x66D5CE67 },
{ "Holey Moley (USA) (Proto)", 8192, 0x3BB2E71D },
{ "Home Run ~ Baseball (USA)", 2048, 0x45ACE998 },
{ "Human Cannonball ~ Cannon Man (USA)", 2048, 0xF05A41E1 },
{ "Hunt & Score ~ Memory Match (USA)", 2048, 0x17DE8070 },
{ "I Want My Mommy (USA)", 4096, 0x57908550 },
{ "I.Q. 180 (USA)", 4096, 0x4DC2A674 },
{ "I.Q. Memory Teaser (Europe)", 4096, 0x75AB6BA8 },
{ "IQ 180 (USA)", 4096, 0x5EA5D7E3 },
{ "Ice Hockey (USA)", 4096, 0xADAB8CDF },
{ "Ikari Warriors (USA)", 16384, 0x5B7CE555 },
{ "Immies & Aggies (USA) (Proto)", 4096, 0x86244C24 },
{ "Indy 500 ~ Race (USA)", 2048, 0xB43DA2A3 },
{ "Infiltrate (USA)", 4096, 0x612BD4DA },
{ "International Soccer (USA)", 4096, 0xB9D549A2 },
{ "Ixion (USA) (Proto)", 8192, 0xB311E13F },
{ "James Bond 007 (USA)", 8192, 0x34D3FFC8 },
{ "Jawbreaker (USA)", 4096, 0xFC11BF67 },
{ "Journey Escape (USA)", 4096, 0x52FF8027 },
{ "Joust (USA)", 8192, 0xA07B3304 },
{ "Jr. Pac-Man (USA)", 16384, 0x5C345BAC },
{ "Jungle Fever (USA)", 4096, 0x0123617B },
{ "Jungle Hunt (USA)", 8192, 0x9C3E8734 },
{ "Kabobber (USA) (Proto)", 4096, 0x9517EE0E },
{ "Kaboom! (USA)", 2048, 0x813F00F6 },
{ "Kamikaze Saucers (USA) (Proto)", 4096, 0x85CB187C },
{ "Kangaroo (USA)", 8192, 0xB9AB57E6 },
{ "Karate (USA)", 4096, 0xAC0A9CE0 },
{ "Keystone Kapers (USA)", 4096, 0x3E55F3A1 },
{ "Killer Satellites (USA)", 8448, 0xBDD932DC },
{ "King Kong (USA)", 4096, 0xCB6F5617 },
{ "Klax (Europe)", 16384, 0xA8AAF68B },
{ "Klax (USA)", 16384, 0x6BC47721 },
{ "Knight on the Town (USA)", 4096, 0xACEA70A6 },
{ "Kool-Aid Man (USA)", 4096, 0xD9BD009B },
{ "Krull (USA)", 8192, 0x1A67E6ED },
{ "Kung-Fu Master (USA)", 8192, 0x5FEA6E51 },
{ "Kyphus (USA) (Proto)", 4096, 0x79BD22E2 },
{ "Lady in Wading (USA)", 4096, 0xF197BBCC },
{ "Laser Blast (USA)", 2048, 0x99365F26 },
{ "Laser Gates (USA)", 4096, 0x4B7865AF },
{ "Lasercade (USA) (Proto)", 4096, 0xEF4FF656 },
{ "Lilly Adventure (Europe)", 4096, 0x3544C6D6 },
{ "Lilly Adventure (USA)", 4096, 0xC6D30567 },
{ "Lochjaw (USA)", 4096, 0xB2A2FF31 },
{ "Lock 'n' Chase (USA)", 4096, 0x7994BF16 },
{ "London Blitz (USA)", 4096, 0xD23CD66C },
{ "Looping (USA) (Proto)", 8192, 0xF9B23F09 },
{ "Lord of the Rings, The - Journey to Rivendell (USA) (Proto)", 8192, 0x59B96DB3 },
{ "Lost Luggage (USA)", 4096, 0x551BDD37 },
{ "M.A.D. (USA)", 4096, 0x5CB68FE5 },
{ "M.A.S.H (USA)", 4096, 0x13E1C83D },
{ "MagiCard (USA)", 2048, 0x14F126C0 },
{ "Malagai (USA)", 4096, 0x65790EF9 },
{ "Mangia' (USA)", 4096, 0xB807B775 },
{ "Marauder (USA)", 4096, 0xF8A8B470 },
{ "Marine Wars (USA)", 4096, 0x4D281EE3 },
{ "Mario Bros. (USA)", 8192, 0x8FBF7E90 },
{ "Master Builder (USA)", 4096, 0xDD196D6C },
{ "Masters of the Universe - The Power of He-Man (USA)", 16384, 0x0603E177 },
{ "Math Gran Prix (USA)", 4096, 0xCCC90C98 },
{ "Maze Craze - A Game of Cops 'n Robbers ~ Maze Mania - A Game of Cops 'n Robbers (USA)", 4096, 0x0098E428 },
{ "Mazy Match (USA) (Proto)", 4096, 0x95C37983 },
{ "McDonald's - Golden Arches Adventure (USA) (Proto)", 4096, 0xADD0115D },
{ "Mega Force (USA)", 4096, 0x9E6AE8C2 },
{ "MegaMania - A Space Nightmare (USA)", 4096, 0x33EDC33E },
{ "Mein Weg (Germany) (En)", 4096, 0x420FF853 },
{ "Meltdown (USA) (Proto)", 4096, 0x7955B3BE },
{ "Midnight Magic (USA)", 16384, 0x5C5447B9 },
{ "Millipede (USA)", 16384, 0xCCC82DD0 },
{ "Mind Maze (USA)", 8192, 0x7CC6C991 },
{ "Miner 2049er - Starring Bounty Bob (USA)", 8192, 0x19F9EF1C },
{ "Miner 2049er Volume II (USA)", 8192, 0x71E814E9 },
{ "Mines of Minos (USA)", 4096, 0xC799E944 },
{ "Miniature Golf ~ Arcade Golf (USA)", 2048, 0x28562315 },
{ "Miss Piggy's Wedding (USA) (Proto)", 8192, 0xB1497E10 },
{ "Missile Command (USA)", 4096, 0xCFF14904 },
{ "Missile Control (Europe)", 4096, 0xAC80976B },
{ "Missile War ~ Astro War (Europe)", 4096, 0xE83F5848 },
{ "Mission 3,000 A.D. (Europe)", 4096, 0x55B140FE },
{ "Mission 3,000 A.D. (USA)", 4096, 0xB959A92F },
{ "Mission Survive (Europe)", 4096, 0xB70F52DC },
{ "Mogul Maniac (USA)", 4096, 0x50AFE04B },
{ "Monkey Music (Unknown) (1982-08-18) (Proto)", 8192, 0x264FD499 },
{ "Monster Cise (USA) (Proto)", 8192, 0xAB0F6091 },
{ "Montezuma's Revenge - Featuring Panama Joe (USA)", 8192, 0xE680A1C9 },
{ "Moon Patrol (USA)", 8192, 0xD641EF2D },
{ "Moonsweeper (USA)", 8192, 0x450B5C57 },
{ "Morse Code Tutor (USA)", 2048, 0x022CBE5F },
{ "MotoRodeo (USA)", 16384, 0x89998E29 },
{ "Motocross (USA)", 4096, 0x36FEB44C },
{ "Motocross Racer (USA)", 8192, 0x0D1BC1CB },
{ "Mountain King (USA)", 12288, 0xED778991 },
{ "Mouse Trap (Europe)", 4096, 0x18B3C907 },
{ "Mouse Trap (USA)", 4096, 0x9DDD45D3 },
{ "Mr. Do! (USA)", 8192, 0x860A47A1 },
{ "Mr. Do!'s Castle (USA)", 8192, 0x2CBBF3FE },
{ "Mr. Postman (Europe)", 4096, 0x16980CB8 },
{ "Mr. Postman (USA)", 4096, 0xA7B03AA5 },
{ "Ms. Pac-Man (USA)", 8192, 0xB2D08FC9 },
{ "Ms. Pac-Man (United Kingdom)", 8192, 0xCBC01134 },
{ "Music Machine, The (USA)", 4096, 0xBD133D59 },
{ "My Golf (Europe)", 8192, 0x0D2CBD53 },
{ "Mysterious Thief, A (USA) (Proto)", 4096, 0x8755C57C },
{ "Name This Game (USA)", 4096, 0xA86E1AD8 },
{ "Night Driver (USA)", 2048, 0x600D8A96 },
{ "Nightmare (Europe)", 4096, 0xB733F921 },
{ "No Escape! (USA)", 4096, 0x8941CAEA },
{ "Nuts (Europe)", 4096, 0xD76D5F14 },
{ "Nuts (USA)", 4096, 0x9B443896 },
{ "O Monstro Marinho (Europe)", 4096, 0x3A1A392B },
{ "Obelix (USA)", 8192, 0x29A51EA4 },
{ "Off Your Rocker (USA) (Proto)", 4096, 0x066EC995 },
{ "Off the Wall (USA)", 16384, 0xA09779EA },
{ "Official Frogger, The (USA)", 8448, 0x1228E48C },
{ "Oink! (USA)", 4096, 0x86F99B5E },
{ "Omega Race (USA)", 12288, 0xE9876116 },
{ "Open Sesame (Europe) (Bit Corporation)", 4096, 0x0D12FD9B },
{ "Open Sesame (Europe) (Goliath)", 4096, 0xD01B5A1F },
{ "Oscar's Trash Race (USA)", 8192, 0x34721D7B },
{ "Othello (USA)", 2048, 0x171AE72F },
{ "Out of Control (USA)", 4096, 0xCA4D03FB },
{ "Outlaw (Europe)", 2048, 0x64F136D2 },
{ "Outlaw ~ Gunslinger (USA)", 2048, 0x68DD7ACD },
{ "Pac-Man (USA)", 4096, 0xDDC9A881 },
{ "Panda Chase (Europe)", 4096, 0xAF417A00 },
{ "Parachute (Europe)", 4096, 0x40E4BC6A },
{ "Party Mix (USA)", 25344, 0x8B8AE545 },
{ "Peek-A-Boo (USA) (Proto)", 4096, 0x07594314 },
{ "Pengo (USA)", 8192, 0x7667E739 },
{ "Pete Rose Baseball (USA)", 16384, 0xD0C6FC32 },
{ "Peter Penguin (Europe)", 4096, 0x5B47448C },
{ "Phantom Tank (Europe)", 4096, 0x9213493B },
{ "Phantom UFO (USA)", 4096, 0x69D3ABC5 },
{ "Pharaoh's Curse (Europe)", 4096, 0xC6B82FC6 },
{ "Pharaoh's Curse (USA)", 4096, 0xC17C5F64 },
{ "Phaser Patrol (USA)", 8448, 0xEAF31BD7 },
{ "Phoenix (USA)", 8192, 0x6AE1B66C },
{ "Pick 'n' Pile (Europe)", 16384, 0xCB76A9D4 },
{ "Pick Up (USA) (Proto)", 4096, 0x0CDD8475 },
{ "Picnic (USA)", 4096, 0x1D507A61 },
{ "Piece o' Cake (USA)", 4096, 0x40355166 },
{ "Pigs in Space - Starring Miss Piggy (USA)", 8192, 0x27673D7C },
{ "Pitfall II - Lost Caverns (USA)", 10240, 0x566dfd55 },
{ "Pitfall! - Pitfall Harry's Jungle Adventure (USA)", 4096, 0x42AD47BF },
{ "Pizza Chef (USA) (Proto)", 4096, 0xA240F751 },
{ "Planet Patrol (USA)", 4096, 0x1E8EBB51 },
{ "Planet of the Apes (USA) (Proto)", 4096, 0xEEA8B688 },
{ "Plaque Attack (USA)", 4096, 0xD5A5EB9E },
{ "Pleiades (USA) (Proto)", 8192, 0x35589CEC },
{ "Polaris (USA)", 8192, 0x25B78F89 },
{ "Pole Position (USA)", 8192, 0xBD822518 },
{ "Polo (USA) (Proto)", 2048, 0x8C0B57D9 },
{ "Pompeii (USA) (Proto)", 4096, 0x83D8A362 },
{ "Pooyan (USA)", 4096, 0xFE24BE60 },
{ "Popeye (USA)", 8192, 0x7D287F20 },
{ "Porky's (USA)", 8192, 0xADD0B98A },
{ "Power Lords (USA) (Proto)", 8192, 0x6EB0D178 },
{ "Pressure Cooker (USA)", 8192, 0xCCF597D8 },
{ "Private Eye (USA)", 8192, 0xEA3BFF1C },
{ "Pygmy (Europe)", 4096, 0x6F22448D },
{ "Q-bert (USA)", 4096, 0x54142E3E },
{ "Q-bert's Qubes (USA)", 8192, 0xD9F499C5 },
{ "Quadrun (USA)", 8192, 0x8D3C887B },
{ "Quadrun (USA, Europe) (Atari Anthology)", 8192, 0x35592D43 },
{ "Quest for Quintana Roo (USA)", 8192, 0xF9F58DD3 },
{ "Quick Step! (USA)", 4096, 0x057440FE },
{ "Rabbit Transit (USA)", 8448, 0x517E5561 },
{ "Racer (USA) (Proto)", 8192, 0x794ED26D },
{ "Racing Car (USA)", 4096, 0xF78489B0 },
{ "Racquetball (USA)", 4096, 0x7EEF9AC0 },
{ "Radar (USA)", 4096, 0x5161A246 },
{ "Radar Lock (USA)", 16384, 0xC29F7285 },
{ "Raft Rider (USA)", 4096, 0x3D1292F8 },
{ "Raiders of the Lost Ark (USA)", 8192, 0xE05FE273 },
{ "Ram It (USA)", 4096, 0x582D5B62 },
{ "Rampage! (USA)", 16384, 0xF0B446AC },
{ "Raumpatrouille (USA)", 4096, 0x3DFEE54B },
{ "Reactor (USA)", 4096, 0x1619E222 },
{ "RealSports Baseball (USA)", 8192, 0x3C5A1B5F },
{ "RealSports Basketball (Europe) (Proto)", 8192, 0x364FEAA6 },
{ "RealSports Boxing (USA)", 16384, 0x3398A1B2 },
{ "RealSports Football (USA)", 8192, 0xF89F64EF },
{ "RealSports Soccer (USA)", 8192, 0x02D89819 },
{ "RealSports Tennis (USA)", 8192, 0x379001A0 },
{ "RealSports Volleyball (USA)", 4096, 0x54FC9EB2 },
{ "Red Sea Crossing (USA)", 4096, 0xE81E232A },
{ "Rescue Terra I (USA)", 4096, 0xA509AD53 },
{ "Revenge of the Beefsteak Tomatoes (USA)", 4096, 0x243A36DF },
{ "Riddle of the Sphinx (USA)", 4096, 0x183A87E3 },
{ "River Patrol (USA)", 8192, 0xC820BD75 },
{ "River Raid (USA)", 4096, 0xC3EB7E1E },
{ "River Raid II (USA)", 16384, 0x27D2DF2C },
{ "Road Runner (USA)", 16384, 0xCB79C061 },
{ "Robin Hood (USA)", 8192, 0xDF96102B },
{ "Robot Tank (USA)", 8192, 0xE127C012 },
{ "Roc 'n Rope (USA)", 8192, 0x9D51C969 },
{ "Rocky & Bullwinkle (USA) (Proto)", 4096, 0x91434DC6 },
{ "Room of Doom (USA)", 4096, 0xF27FC3BE },
{ "Rubik's Cube (USA)", 4096, 0x37F23CB8 },
{ "Rubik's Cube 3-D (USA) (Proto)", 4096, 0x47BFD42C },
{ "Rush Hour (USA) (Proto)", 4096, 0xE681F62E },
{ "S.A.C. Alert (USA) (Proto)", 4096, 0x79D3B1E6 },
{ "SCRMNN (USA) (Proto)", 4096, 0x6B0672A6 },
{ "Saboteur (USA) (Proto) (1983-09-02)", 8192, 0xC359C13D },
{ "Saboteur (USA) (Proto) (1983-12-20)", 8192, 0x7EFE0286 },
{ "Save Mary! (USA) (Proto)", 16384, 0x01E18F53 },
{ "Save Our Ship (Europe)", 4096, 0xC422160A },
{ "Save Our Ship (USA)", 4096, 0xC15A66E7 },
{ "Save the Whales (USA) (Proto)", 4096, 0x9A346CE2 },
{ "Sea Battle (USA)", 4096, 0x83B4EB19 },
{ "Sea Hawk (USA)", 4096, 0x5224DC7B },
{ "Sea Hunt ~ Scuba Diver (USA)", 4096, 0xF94A8AEC },
{ "Sea Monster (USA)", 4096, 0xD6490BF3 },
{ "Seahawk (Europe)", 4096, 0x5D3C699E },
{ "Seaquest (USA)", 4096, 0x8658E8D9 },
{ "Secret Agent (USA) (Proto)", 4096, 0xD16C45F9 },
{ "Secret Quest (USA)", 16384, 0x93C9EB47 },
{ "See Saw (Europe)", 4096, 0x6C6C3249 },
{ "Sentinel (USA)", 16384, 0xD457B245 },
{ "Shootin' Gallery (Europe) (Proto)", 4096, 0x05E98494 },
{ "Shootin' Gallery (USA)", 4096, 0xB89AFF8B },
{ "Shooting Arcade (USA) (Proto)", 16384, 0x6F6FB3D6 },
{ "Shuttle Orbiter (USA)", 4096, 0x253D6396 },
{ "Sinistar (USA) (Proto)", 8192, 0x8E81A2A4 },
{ "Sir Lancelot (USA)", 8192, 0xEB792891 },
{ "Six Pack (USA) (Proto)", 8192, 0x0748817D },
{ "Skate Boardin' (USA)", 8192, 0x6EE721F7 },
{ "Skate Boardin' (USA) (Activision Anthology - Remix Edition)", 8192, 0x49739144 },
{ "Skeet Shoot (USA)", 2048, 0x57D69B13 },
{ "Ski Hunt (Europe)", 4096, 0x5DF00A09 },
{ "Ski Run (Europe)", 4096, 0xE20A00B3 },
{ "Ski Run (USA)", 4096, 0xD6634A09 },
{ "Skiing (USA)", 2048, 0x35F80A22 },
{ "Skindiver (Europe)", 4096, 0x9A98888C },
{ "Sky Alien ~ Assault (Europe)", 4096, 0xA23EAAC5 },
{ "Sky Diver ~ Dare Diver (USA)", 2048, 0x00312EA9 },
{ "Sky Jinks (USA)", 2048, 0x96F8CF59 },
{ "Sky Patrol (USA) (Proto)", 8192, 0xA1ECDF0E },
{ "Sky Skipper (USA)", 4096, 0xCC6E0F22 },
{ "Slot Machine ~ Slots (USA)", 2048, 0xCB378D95 },
{ "Slot Racers ~ Maze (USA)", 2048, 0x177DBDF8 },
{ "Smurf - Rescue in Gargamel's Castle (USA)", 8192, 0xE0624A7F },
{ "Smurfs Save the Day (USA)", 8192, 0xAD89C697 },
{ "Snail Against Squirrel (Europe)", 4096, 0x5C5B9E1A },
{ "Sneak 'n Peek (USA)", 4096, 0x93B17C39 },
{ "Snoopy and the Red Baron (USA)", 8192, 0xD1039967 },
{ "Snow White and the Seven Dwarfs (USA) (Proto)", 8192, 0x38598A9A },
{ "Solar Fox (USA)", 8192, 0xD2CA6CE8 },
{ "Solar Storm (USA)", 4096, 0xA970B3E3 },
{ "Solaris (USA)", 16384, 0x2B87850E },
{ "Sonar (Unknown) (Proto)", 2048, 0x9B619D47 },
{ "Sorcerer (USA)", 4096, 0xC7734BE6 },
{ "Sorcerer's Apprentice (USA)", 8192, 0xE5DBFED1 },
{ "Sound (USA, Europe) (Atari Anthology)", 2048, 0x31372FB1 },
{ "Space Attack (USA)", 4096, 0xB34A3E57 },
{ "Space Cavern (USA)", 4096, 0x3B0FFD89 },
{ "Space Invaders (USA)", 4096, 0xA6E867B3 },
{ "Space Jockey (USA)", 2048, 0xAB24D73E },
{ "Space Shuttle - A Journey into Space (USA)", 8192, 0xDD210CF3 },
{ "Space Tunnel (USA)", 4096, 0x1B62E1B8 },
{ "Space War ~ Space Combat (USA)", 2048, 0x65622F2A },
{ "SpaceMaster X-7 (USA)", 4096, 0xE554D7D0 },
{ "Spacechase (USA)", 4096, 0x2954D22D },
{ "Spider Fighter (USA)", 4096, 0xBF0941F6 },
{ "Spider Maze (USA)", 4096, 0xFBC1911D },
{ "Spider-Man (USA)", 4096, 0x4DFEA848 },
{ "Spike's Peak (USA)", 8192, 0x50EFEA8D },
{ "Spinning Fireball (USA) (Proto)", 4096, 0xFA40C6D3 },
{ "Spitfire Attack (USA)", 4096, 0x093507D8 },
{ "Springer (USA)", 8192, 0xDD183A4F },
{ "Sprint Master (USA)", 16384, 0xC495904E },
{ "Spy Hunter (USA)", 8192, 0x4F804E49 },
{ "Squeeze Box (USA)", 4096, 0xD37F3FB3 },
{ "Squirrel ~ O Esquilo (USA)", 4096, 0xAC2920EF },
{ "Squoosh (USA) (Proto)", 4096, 0xB4212ADB },
{ "Sssnake (USA)", 4096, 0x1B5B0212 },
{ "Stampede (USA)", 2048, 0x740800F3 },
{ "Star Fox (USA)", 4096, 0x915EC040 },
{ "Star Raiders (USA)", 8192, 0x2AE193EE },
{ "Star Ship ~ Outer Space (USA)", 2048, 0x6609267E },
{ "Star Strike (USA)", 4096, 0x936A596D },
{ "Star Trek - Strategic Operations Simulator (USA)", 8192, 0x820EA8A2 },
{ "Star Voyager (USA)", 4096, 0x4FE8477F },
{ "Star Wars - Jedi Arena (USA)", 4096, 0x9E36D347 },
{ "Star Wars - Return of the Jedi - Death Star Battle (USA)", 8192, 0x0886A55D },
{ "Star Wars - Return of the Jedi - Ewok Adventure (USA) (Proto)", 8192, 0x939550E7 },
{ "Star Wars - The Arcade Game (USA)", 8192, 0x65C31CA4 },
{ "Star Wars - The Empire Strikes Back (USA)", 4096, 0xEE8C9A89 },
{ "StarMaster (USA)", 4096, 0x25248B4B },
{ "Stargate (USA)", 8192, 0xCDE3530E },
{ "Stargunner (USA)", 4096, 0xFCA9C17B },
{ "Steeplechase (Europe)", 4096, 0x6AAD3F22 },
{ "Steeplechase (USA)", 2048, 0x5F6C32C3 },
{ "Stellar Track (USA)", 4096, 0xA76E93BF },
{ "Stone Age (USA)", 4096, 0x8BCDB222 },
{ "Strategy X (USA)", 4096, 0x2AF91A81 },
{ "Strawberry Shortcake - Musical Match-Ups (USA)", 4096, 0xFB29E31F },
{ "Street Racer ~ Speedway II (USA)", 2048, 0x47592880 },
{ "Stronghold (USA)", 4096, 0xBB91FFA6 },
{ "Stunt Cycle (USA) (Proto)", 2048, 0x6354FF4C },
{ "Stunt Man (USA)", 4096, 0xEA30CDD5 },
{ "Sub-Scan (USA)", 4096, 0x5069D7DA },
{ "Submarine Commander (USA)", 4096, 0x3262960A },
{ "Subterranea (USA)", 8192, 0x2AB951F7 },
{ "Suicide Mission (USA)", 8448, 0xB92C49E3 },
{ "Summer Games (USA)", 16384, 0xB9CD3F86 },
{ "Super Baseball (USA)", 16384, 0xC3704B73 },
{ "Super Baseball (USA, Europe) (Atari Anthology)", 16384, 0x2245F170 },
{ "Super Breakout (USA)", 4096, 0xB0F20D31 },
{ "Super Breakout (USA) (Alt)", 4096, 0x171DBE92 },
{ "Super Challenge Baseball (USA)", 4096, 0xF7E88EC2 },
{ "Super Challenge Football (USA)", 4096, 0x55F02EFE },
{ "Super Cobra (USA)", 8192, 0xDE97103D },
{ "Super Football (USA)", 16384, 0xC9B16F3C },
{ "Superman (USA)", 4096, 0xAFD7317B },
{ "Surf's Up (USA) (Proto)", 8192, 0x0CFD04D9 },
{ "Surfer's Paradise - But Danger Below! (Europe)", 4096, 0x8C68F2AE },
{ "Surround ~ Chase (USA)", 2048, 0xDCB11F23 },
{ "Survival Island (USA)", 25344, 0x8AB91D6B },
{ "Survival Run (USA)", 4096, 0x8C0EEA30 },
{ "Survival Run (USA) (Proto)", 4096, 0x8E888F3E },
{ "Sweat! The Decathlon Game (USA)", 16896, 0xF24B44E3 },
{ "Sword of Saros (USA)", 8448, 0xD96A3632 },
{ "SwordQuest - EarthWorld (USA)", 8192, 0x9031A479 },
{ "SwordQuest - EarthWorld (USA, Europe) (Atari Anthology)", 8192, 0xD5E21B79 },
{ "SwordQuest - FireWorld (USA)", 8192, 0x6AE46A0C },
{ "SwordQuest - WaterWorld (USA)", 8192, 0xCA7B4685 },
{ "Swordfight (USA)", 4096, 0xF1AD77BE },
{ "TRON - Deadly Discs (USA)", 4096, 0xD35B22F9 },
{ "Tac-Scan (USA)", 4096, 0xA2A42BEC },
{ "Tank AI (USA, Europe)", 16384, 0xA7CEEA56 },
{ "Tanks But no Tanks (USA)", 4096, 0x4ADBB1F9 },
{ "Tapeworm (USA)", 4096, 0xD63474B3 },
{ "Tapper (USA)", 8192, 0xD28AFB2C },
{ "Tax Avoiders (USA)", 8192, 0x468D734C },
{ "Taz (USA)", 8192, 0xC9D7EC9B },
{ "Telepathy (USA) (Proto)", 8192, 0xA0996A0D },
{ "Tempest (USA) (Proto)", 8192, 0x711647F6 },
{ "Tempest (USA) (Proto) (Atari Anthology)", 8192, 0xE6DABC1B },
{ "Tennis (USA)", 2048, 0x0A42515B },
{ "Texas Chainsaw Massacre, The (USA)", 4096, 0xEC389CAA },
{ "Texas Chainsaw Massacre, The (USA) (Beta)", 4096, 0xEA9A4268 },
{ "Threshold (USA)", 4096, 0xCE5097FD },
{ "Thunderground (USA)", 4096, 0x9E67C699 },
{ "Thwocker (USA) (Proto)", 8192, 0xB60AB310 },
{ "Time Pilot (USA)", 8192, 0x21EE7DB4 },
{ "Time Warp (Europe)", 4096, 0x551E2144 },
{ "Time Warp (USA)", 4096, 0xE5BC054D },
{ "Title Match Pro Wrestling (USA)", 8192, 0xEF708C03 },
{ "Title Match Pro Wrestling (USA) (Activision Anthology - Remix Edition)", 8192, 0xB6F28C18 },
{ "Tomarc the Barbarian (USA)", 8192, 0xB5B5AC84 },
{ "Tomcat - The F-14 Fighter Simulator (Europe) (Activision Anthology - Remix Edition) (PAL)", 16384, 0xCB5D1C42 },
{ "Tomcat - The F-14 Fighter Simulator (USA)", 16384, 0x8987C473 },
{ "Tooth Protectors (USA)", 8192, 0xFD8C81E5 },
{ "Towering Inferno (USA)", 4096, 0x2C7B86B8 },
{ "Track and Field (USA)", 16384, 0x21827056 },
{ "Treasure Below (Europe)", 4096, 0xD2CEA797 },
{ "Treasure Island (Europe)", 4096, 0x907F1D90 },
{ "Trick Shot (USA)", 4096, 0xD1CE4634 },
{ "Tunnel Runner (USA)", 12288, 0xA02745F8 },
{ "Tunnel de L'Espace, Le (Europe)", 4096, 0x28BC5A4D },
{ "Turbo (USA) (Proto)", 8192, 0x50EB43D3 },
{ "Turmoil (USA)", 4096, 0x8C65298A },
{ "Tutankham (USA)", 8192, 0xEC959BF2 },
{ "Universal Chaos (USA)", 4096, 0x25EFA169 },
{ "Up 'n Down (USA)", 8192, 0xC04C2B58 },
{ "Vanguard (USA)", 8192, 0xC4BEC521 },
{ "Vault Assault (USA) (Unl)", 4096, 0x856A6EFB },
{ "Venetian Blinds Demo (USA)", 2048, 0x1F0D3562 },
{ "Venture (USA)", 4096, 0x85E0CA62 },
{ "Video Checkers ~ Checkers (USA)", 4096, 0x3DF33335 },
{ "Video Chess (USA)", 4096, 0xB6226A54 },
{ "Video Jogger (USA)", 4096, 0x28FA8D77 },
{ "Video Life (USA)", 2048, 0x34B0B5C2 },
{ "Video Olympics ~ Pong Sports (USA)", 2048, 0xE4BC89C4 },
{ "Video Pinball ~ Arcade Pinball (USA)", 4096, 0x10D95426 },
{ "Video Reflex (USA)", 4096, 0x77B8B0D1 },
{ "Vogel Flieh (Europe)", 4096, 0x1CA034CA },
{ "Wabbit (USA)", 4096, 0x2D07ED77 },
{ "Walker ~ Schussel, der Polizistenschreck (Europe)", 4096, 0xDA8E49FB },
{ "Wall Ball (USA)", 4096, 0x9AC6A295 },
{ "Wall Break (Europe)", 4096, 0x727408CD },
{ "Wall-Defender (USA)", 4096, 0x6841D2A7 },
{ "Warlords (USA)", 4096, 0xCF174B57 },
{ "Warplock (USA)", 4096, 0x6531D4E1 },
{ "Wing War (Europe)", 8192, 0xCFEBEF9E },
{ "Wings (USA) (Proto)", 12288, 0x5E89B8AF },
{ "Winter Games (USA)", 16384, 0xDDFF6850 },
{ "Wizard (USA) (Proto)", 2048, 0xA0BCC502 },
{ "Wizard of Wor (USA)", 4096, 0x926F6F11 },
{ "Word Zapper (USA)", 4096, 0xA11EEEAB },
{ "Words-Attack (Europe) (Proto)", 4096, 0x77975BAA },
{ "World End (Europe)", 4096, 0xDCC36508 },
{ "World End (USA)", 4096, 0x9BE88ADA },
{ "Worm War I (USA)", 4096, 0x97B83A54 },
{ "X-Man (USA)", 4096, 0x91659AF1 },
{ "Xenophobe (USA)", 16384, 0xF875C406 },
{ "Xevious (USA) (Proto) (1983-08-02)", 8192, 0x2EF09F4A },
{ "Xevious (USA) (Proto) (1984-01-18)", 8192, 0xF5802A6C },
{ "Yars' Revenge (USA)", 4096, 0xDFA1C825 },
{ "Z-Tack (USA)", 4096, 0x42A76F54 },
{ "Zaxxon (USA)", 8192, 0x265AA87F },
{ "Zoo Fun (USA)", 4096, 0xC1DA05F6 },
{ "Zoo Keeper Sounds (USA) (Proto)", 2048, 0xAE15C45D },
};
#define LONGEST_FILENAME 83
