#ifndef __WEAPON_DECORATOR_HPP 
#define __WEAPON_DECORATOR_HPP

#include "Weapon.hpp"

class WeaponDecorator: public Weapon {
    protected:
        Weapon* weapon; 
        int levelNum;

    public:
        WeaponDecorator(Weapon* weapon, int levelNum) {
            this->weapon = weapon; 
            this->levelNum = levelNum;
        }
        ~WeaponDecorator() {
            delete this->weapon; 
        }
        double calculateDamage(double playerAtk, double enemyDef) {
            return weapon->calculateDamage(playerAtk, enemyDef); 
        }
        virtual void printStats(std::ostream& out) {
            weapon->printStats(out);
        }



};


#endif 