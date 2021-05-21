#ifndef __CHARACTER_FACTORY_H__
#define __CHARACTER_FACTORY_H__

#include "Character.hpp" 
#include "Weapon.hpp"
#include "Armor.hpp"

class CharacterFactory {
    protected:
        string name; 
        double atk;
        double def;
        double curHp; 
        Weapon* currWeapon;
        Armor* currArmor;
	double maxHp;
    public:
        virtual Character* createCharacter() = 0; 
        //virtual Weapon* createWeapon() = 0; 
        //virtual Armor* createArmor() = 0; 

};

#endif
