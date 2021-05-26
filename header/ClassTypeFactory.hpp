#ifndef __CLASS_TYPE_FACTORY_H__
#define __CLASS_TYPE_FACTORY_H__

#include "Character.hpp" 
#include "Weapon.hpp"
#include "Armor.hpp"

class ClassTypeFactory {
 
    public:
        virtual Character* createCharacter() = 0; 
        virtual Weapon* createWeapon() = 0; 
        virtual Armor* createArmor() = 0; 

};

#endif
