#ifndef __WARRIOR_WEAPON_H__
#define __WARRIOR_WEAPON_H__

#include "Weapon.hpp"

class WarriorWeapon: public Weapon {
    public:
        WarriorWeapon();
        WarriorWeapon(double, double, int, double, double ); 
        ~WarriorWeapon(); 
        double calculateDamage(); 
        double calculateLifeDrain(); 


};

#endif 