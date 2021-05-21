#ifndef __LOOT_CPP__
#define __LOOT_CPP__

#include "../header/Loot.h"

void Loot::rollForLoot(int levelNum) {}

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

Weapon* Loot::spawnWeapon(int levelNum, CharacterFactory*) {}
Armor* Loot::spawnArmor(int levelNum, CharacterFactory*) {}

void Loot::spawnFood() {
    if(roll(1,100)) {
	cout << "You found" <<  "\e[1;33m RATATOUILLE\e[0m" << "!!!" << endl;
	player->increaseHealth(player->getMaxHp());
	return;
    }	

    if(roll(1,5)) {
	cout << "You found" <<  "\e[1;35m STRAWBERRIES AND CHEESE\e[0m" << "!!" << endl; 
	player->increaseHealth(player->getMaxHp() * 0.4);
	return;
    } 

    if(roll(2,5)) {
	cout << "You found" <<  "\e[1;34m LIGHTNING MUSHROOMS\e[0m" << "!" << endl; 
	player->increaseHealth(player->getMaxHp() * 0.2);	
	return;
    }

    if(roll(2,3)) {
	cout << "You found (edible)" <<  "\e[1;37m TRASH\e[0m" << "..." << endl; 
	player->increaseHealth(player->getMaxHp() * 0.05);	
	return;
    }
    cout << "You went hungry this time..." << endl;
}

#endif //__LOOT_CPP__
