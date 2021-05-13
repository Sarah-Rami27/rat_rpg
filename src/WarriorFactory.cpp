#ifndef __WARRIOR_FACTORY_CPP__
#define __WARRIOR_FACTORY_CPP__

#include "../header/WarriorFactory.h"
#include "../header/WarriorChar.h"

WarriorFactory::WarriorFactory() {
}

WarriorFactory::~WarriorFactory() {

}

Character* WarriorFactory::createCharacter() {
    return new WarriorChar(); 
}

#endif 