#ifndef __LOOT_CPP__
#define __LOOT_CPP__

#include "../header/Loot.h"

Weapon* Loot::spawnWeapon(int levelNum, ClassTypeFactory* factory) {
	stack<Weapon*> perkStack;
	Weapon* currentWeapon = factory->createWeapon(levelNum);		// This will create the base weapon scaled to level
	
	perkStack.push(currentWeapon);
	while (levelNum > 0) {
		if (rng.roll(7, 100)) {
			Weapon* damageIncrease = new DamageIncrease(perkStack.top(), levelNum); 	
			currentWeapon = damageIncrease;
			perkStack.push(currentWeapon); 
		}
		if (rng.roll(7, 100)) {
			Weapon* critChance = new CritChance(perkStack.top(), levelNum); 
			currentWeapon = critChance;	
			perkStack.push(currentWeapon);
		}
		if (rng.roll(7, 100)) {
			Weapon* piercing = new Piercing(perkStack.top(), levelNum); 
			currentWeapon = piercing;	
			perkStack.push(currentWeapon);	
		}
		if (rng.roll(7, 100)) {
			Weapon* extraHit = new ExtraHit(perkStack.top(), levelNum); 
			currentWeapon = extraHit;	
			perkStack.push(currentWeapon);	
		}
		levelNum--; 
	}
	
	return currentWeapon;
}

Armor* Loot::spawnArmor(int levelNum, ClassTypeFactory* factory) {	
	double def = rng.pickDouble(levelNum * 0.5, levelNum * 1.5);
	return factory->createArmor(levelNum + def);
}

double Loot::spawnFood() { //returns food ratio for game to use in tandem with maxhp
    if(rng.roll(1,100)) {
	cout << "You found" <<  "\e[1;33m RATATOUILLE\e[0m" << "!!!" << endl;
	return 1.00;
    }	

    if(rng.roll(1,5)) {
	cout << "You found" <<  "\e[1;35m STRAWBERRIES AND CHEESE\e[0m" << "!!" << endl; 
	return 0.30;
    } 

    if(rng.roll(2,5)) {
	cout << "You found" <<  "\e[1;34m LIGHTNING MUSHROOMS\e[0m" << "!" << endl; 
	return 0.20;
    }

    if(rng.roll(2,3)) {
	cout << "You found (edible)" <<  "\e[1;37m TRASH\e[0m" << "..." << endl; 
	return 0.05;
    }

    cout << "You found no food... Django won't be happy" << endl;
    return 0.00;
}

#endif //__LOOT_CPP__
