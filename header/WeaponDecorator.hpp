#ifndef __WEAPON_DECORATOR_HPP 
#define __WEAPON_DECORATOR_HPP

#include "Weapon.hpp"

class WeaponDecorator: public Weapon {
    protected:
        Weapon* weapon; 

    public:
        WeaponDecorator(Weapon* weapon) {
            this->weapon = weapon; 
        }
        ~WeaponDecorator() {
            delete this->weapon; 
        }
        double calculateDamage(double playerAtk, double enemyDef) {
            return weapon->calculateDamage(playerAtk, enemyDef); 
        }



};


#endif 