#ifndef __LOOT_CPP__
#define __LOOT_CPP__

#include "../header/Loot.h"

Weapon* Loot::spawnWeapon(int levelNum, ClassTypeFactory* factory) {
	stack<Weapon*> perkStack;
	Weapon* currentWeapon = factory->createWeapon(levelNum);		// This will create the base weapon scaled to level
	
	perkStack.push(currentWeapon);
	while (levelNum > 0) {
		if (rng.roll(5, 100)) {
			Weapon* damageIncrease = new DamageIncrease(perkStack.top(), levelNum); 	
			currentWeapon = damageIncrease;
			perkStack.push(currentWeapon); 
		}
		if (rng.roll(5, 100)) {
			Weapon* critChance = new CritChance(perkStack.top(), levelNum); 
			currentWeapon = critChance;	
			perkStack.push(currentWeapon);
		}
		if (rng.roll(5, 100)) {
			Weapon* piercing = new Piercing(perkStack.top(), levelNum); 
			currentWeapon = piercing;	
			perkStack.push(currentWeapon);	
		}
		if (rng.roll(5, 100)) {
			Weapon* extraHit = new ExtraHit(perkStack.top(), levelNum); 
			currentWeapon = extraHit;	
			perkStack.push(currentWeapon);	
		}
		levelNum--; 
	}
	
	return currentWeapon;
}

Armor* Loot::spawnArmor(int levelNum, ClassTypeFactory* factory) {	
	double def = rng.pickDouble(levelNum * 4.5, levelNum * 6.5);
	return factory->createArmor(levelNum + def);
}

double Loot::spawnFood() { //returns food ratio for game to use in tandem with maxhp
    if(rng.roll(15,100)) {
	cout << "You found" <<  "\e[1;33m RATATOUILLE\e[0m" << "!!!" << endl;
	cout << R"(
  /       \
    \
    /    /
   \
    \   \
 _____________  
|=============|
|_____________|
 \           /
  \_________/
)";
	return 1.00;
    }	

    if(rng.roll(25,100)) {
	cout << "You found" <<  "\e[1;35m STRAWBERRIES AND CHEESE\e[0m" << "!!" << endl; 
		
cout << R"(
 .  *    ..  *    o.    o.    o
   .   o   *  .    *.       *
.       \VW/    *    ___  *   .
   *  .::::::.     .'o O'-._
  o   ::::::::    / O o_.-`|  *
 ~ .  '::::::'   /O_.-'  O |
 .  .  '::::'    | o   o .-` *
  *  ,   `"`     |o O_.-'  .
       ~         '--`
)";
	return 0.65;
    } 

    if(rng.roll(40,100)) {
	cout << "You found" <<  "\e[1;34m LIGHTNING MUSHROOMS\e[0m" << "!" << endl; 
cout << R"(
       .-"""-.
      /* * * *\
     :_.-:`:-._;
         (_)
 V.v,/\|/(_)\|/v,.Vv/.
)";
	return 0.40;
    }

    if(rng.roll(99,100)) {
	cout << "You found (edible)" <<  "\e[1;37m TRASH\e[0m" << "..." << endl; 
	cout << R"(
   _._
 .'--.`.
 |'".'"|  
  `--`'

)";
	return 0.20;
    }

    cout << "You found no food... Django won't be happy" << endl;
    return 0.00;
}

#endif //__LOOT_CPP__
