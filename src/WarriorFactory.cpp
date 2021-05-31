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
    double minDamage = (levelNum / 2.00) + 1.00;
    double maxDamage = (levelNum / 1.8) + 3.00;
    return new WarriorWeapon(minDamage, maxDamage); 
}

Armor* WarriorFactory::createArmor(int levelNum) {
    double def = levelNum / 4.00;
    return new WarriorArmor(def); 
}

#endif 
