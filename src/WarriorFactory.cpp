#ifndef __WARRIOR_FACTORY_CPP__
#define __WARRIOR_FACTORY_CPP__

#include "../header/WarriorFactory.h"

WarriorFactory::WarriorFactory() {
}

WarriorFactory::~WarriorFactory() {

}

Character* WarriorFactory::createCharacter() {
    return new WarriorChar(); 
}

Weapon* WarriorFactory::createWeapon(int levelNum) {
    double minDamage = (levelNum / 3.00) + 1.00;
	double maxDamage = (levelNum / 3.00) + 5.00;
    return new WarriorWeapon(minDamage, maxDamage); 
}

Armor* WarriorFactory::createArmor() {
    return new WarriorArmor(); 
}

#endif 