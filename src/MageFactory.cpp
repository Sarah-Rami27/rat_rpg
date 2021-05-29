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
    double minDamage = (levelNum / 3.00) + 1.00;
	double maxDamage = (levelNum / 3.00) + 5.00;
    return new MageWeapon(minDamage, maxDamage); 
}

Armor* MageFactory::createArmor() {
    return new MageArmor();
}

#endif