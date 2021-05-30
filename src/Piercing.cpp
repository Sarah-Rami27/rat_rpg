#ifndef _PIERCING_CPP_
#define _PIERCING_CPP_

#include "../header/Piercing.h"

Piercing::Piercing(Weapon* weapon, int levelNum): WeaponDecorator(weapon, levelNum){
    RNG rng;
    double piercing = rng.pickDouble(.03 * (levelNum + 1), .06 * (levelNum + 1));
    if(piercing > 1.0) { 
        piercing = 1.0;
    }
}

Piercing::~Piercing(){}

double Piercing::calculateDamage(double playerAtk, double enemyDef){
    
    double damage = enemyDef * (1.0 - piercing);
    return damage + WeaponDecorator::calculateDamage(playerAtk, enemyDef);
}

void Piercing::printStats(std::ostream& out) {
    cout << "Piercing: " << (piercing * 100) << "%" << endl;
    WeaponDecorator::printStats(out); 
}

#endif
