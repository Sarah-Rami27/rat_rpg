#ifndef __MAGE_FACTORY_H__
#define __MAGE_FACTORY_H__

#include "ClassTypeFactory.hpp"

class MageFactory: public ClassTypeFactory {

    public: 
        MageFactory(); 
        ~MageFactory(); 
        Character* createCharacter();
        Weapon* createWeapon();
        Armor* createArmor();  
};

#endif 