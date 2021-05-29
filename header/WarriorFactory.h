#ifndef __WARRIOR_FACTORY_H__
#define __WARRIOR_FACTORY_H__

#include "ClassTypeFactory.hpp"
#include "WarriorChar.h"
#include "WarriorWeapon.h"
#include "WarriorArmor.h"

class WarriorFactory: public ClassTypeFactory {

    public: 
        WarriorFactory(); 
        ~WarriorFactory(); 
        Character* createCharacter(); 
        Weapon* createWeapon(int);
        Armor* createArmor(); 
};

#endif 