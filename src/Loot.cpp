#ifndef __LOOT_CPP__
#define __LOOT_CPP__

#include "../header/Loot.h"

Weapon* Loot::spawnWeapon(int levelNum, ClassTypeFactory* factory) {
	return factory->createWeapon(levelNum);		// This will create the base weapon scaled to level
	// We will create/apply the perks here and return the last perk object
}

Armor* Loot::spawnArmor(int levelNum, ClassTypeFactory* factory) {	
	return factory->createArmor(levelNum);
}

double Loot::spawnFood() { //returns food ratio for game to use in tandem with maxhp
    if(roll(1,100)) {
	cout << "You found" <<  "\e[1;33m RATATOUILLE\e[0m" << "!!!" << endl;
	return 1.00;
    }	

    if(roll(1,5)) {
	cout << "You found" <<  "\e[1;35m STRAWBERRIES AND CHEESE\e[0m" << "!!" << endl; 
	return 0.30;
    } 

    if(roll(2,5)) {
	cout << "You found" <<  "\e[1;34m LIGHTNING MUSHROOMS\e[0m" << "!" << endl; 
	return 0.20;
    }

    if(roll(2,3)) {
	cout << "You found (edible)" <<  "\e[1;37m TRASH\e[0m" << "..." << endl; 
	return 0.05;
    }

    cout << "You found no food... Django won't be happy" << endl;
    return 0.00;
}

#endif //__LOOT_CPP__
