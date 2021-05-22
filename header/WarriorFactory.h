#ifndef __WARRIOR_FACTORY_H__
#define __WARRIOR_FACTORY_H__

#include "ClassTypeFactory.hpp"

class WarriorFactory: public ClassTypeFactory {

    public: 
        WarriorFactory(); 
        ~WarriorFactory(); 
        Character* createCharacter(); 
};

#endif 