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

Weapon* WarriorFactory::createWeapon() {
    return new WarriorWeapon(); 
}

Armor* WarriorFactory::createArmor() {
    return new WarriorArmor(); 
}

#endif 