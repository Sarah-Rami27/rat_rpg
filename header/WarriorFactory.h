#ifndef __WARRIOR_FACTORY_H__
#define __WARRIOR_FACTORY_H__

#include "CharacterFactory.hpp"

class WarriorFactory: public CharacterFactory {

    public: 
        WarriorFactory(); 
        ~WarriorFactory(); 
        Character* createCharacter(); 
};

#endif 