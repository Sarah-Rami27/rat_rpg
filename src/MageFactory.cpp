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

#endif