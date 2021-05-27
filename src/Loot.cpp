#ifndef __LOOT_CPP__
#define __LOOT_CPP__

#include "../header/Loot.h"

//void Loot::rollForLoot(int levelNum) {
//	if(roll(3,10)) {
//		cout << "A weapon dropped!" << endl;
//		spawnWeapon(levelNum);		
//	}
//	if(roll(3,10)) {
//		cout << "Armor dropped!" << endl;
//		spawnArmor(levelNum);
//	}
//}

bool Loot::roll(int good, int all) { //good = success, all = total rolls
	srand (time(NULL)); //init random seed

	double succRate = static_cast<double>(good) / all; //succRate = success percentage
	
	return rand()/(RAND_MAX+1.0) < succRate;
	/*
 	* rand()/RAND_MAX will return a number between 0 and 1
 	* < is used over <= in case rand() picks 0, and the succRate is 0
 	* 1.0 is added to Rand_Max to make sure that rand()/Rand_MAX returning
 	* 1.0 does not make the succRate of 1.0 fail...
 	*/
}

Weapon* Loot::spawnWeapon(int levelNum, ClassTypeFactory* factory) {}
	double minDamage = (levelNum / 3.00) + 1.00;
	double maxDamage = (levelNum / 3.00) + 5.00;
	int numHits = 1;
	double critChance = 0.20;
	double piercing = 0.00;
	return factory->createWeapon(minDamage, maxDamage, numHits, critChance, piercing);
}

Armor* Loot::spawnArmor(int levelNum, ClassTypeFactory* factory) {
	double def = levelNum / 5.00;	
	return factory->createArmor(def);
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
