#ifndef __MAGE_FACTORY_H__
#define __MAGE_FACTORY_H__

#include "CharacterFactory.hpp"

class MageFactory: public CharacterFactory {

    public: 
        MageFactory(); 
        ~MageFactory(); 
        Character* createCharacter(); 
};

#endif 