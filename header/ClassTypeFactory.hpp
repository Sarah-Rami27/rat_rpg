#ifndef __CLASS_TYPE_FACTORY_H__
#define __CLASS_TYPE_FACTORY_H__

#include "Character.hpp" 

class ClassTypeFactory {
    protected:
        string name; 
        double atk;
        double def;
        double curHp; 
	double maxHp;
    public:
        virtual Character* createCharacter() = 0; 
        //virtual Weapon* createWeapon() = 0; 
        //virtual Armor* createArmor() = 0; 

};

#endif
