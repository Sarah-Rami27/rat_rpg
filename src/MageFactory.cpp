#ifndef __MAGE_FACTORY_CPP__
#define __MAGE_FACTORY_CPP__

#include "../header/MageFactory.h"
#include "../header/MageChar.h"

MageFactory::MageFactory() {

}

MageFactory::~MageFactory() {

}

Character* MageFactory::createCharacter() {
    return new MageChar();  
}

Weapon* MageFactory::createWeapon(int levelNum) {
    double minDamage = (levelNum / 1.5) + 4.00;
    double maxDamage = (levelNum / 1.8) + 6.00;
    return new MageWeapon(minDamage, maxDamage); 
}

Armor* MageFactory::createArmor(int levelNum) {
    double def = levelNum / 5.00;
    return new MageArmor(def);
}

#endif
