#ifndef __LOOT_CPP__
#define __LOOT_CPP__

#include "../header/Loot.h"

void Loot::rollForLoot(int levelNum);

bool Loot::roll(int good, int all) { //good = success, all = total rolls
	srand (time(NULL)); //init random seed

	double succRate = static_cast<double>(good) / all; //succRate = success percentage
	
	return rand()/(RAND_MAX+1.0) < succRate;
	/*
 * 	 * rand() / RAND_MAX will return a number between 0 & 1
 * 	 	 * We will compare this number to the succRate to see if it falls in range...
 * 	 	 	 * < is used in case, succRate is 0 & rand() rolls 0, we expect a fail with 0 percent success rate
 * 	 	 	 	 * We add 1.0 to RAND_MAX because rand() / RAND_MAX could return 1 which would make a 100% success
 * 	 	 	 	 	 * rate fail...
 * 	 	 	 	 	 	 */
}

Weapon* Loot::spawnWeapon(int, CharacterFactory*);
Armor* Loot::spawnArmor(int, CharacterFactory*);

void Loot::spawnFood() {}
`
#endif //__LOOT_CPP__
