#ifndef _PIERCING_CPP_
#define _PIERCING_CPP_

#include "../header/Piercing.h"

Piercing::Piercing(Weapon* weapon, int levelNum): WeaponDecorator(weapon, levelNum){}

Piercing::~Piercing(){}

double Piercing::calculateDamage(double playerAtk, double enemyDef){
    RNG rng;
    double piercing = rng.pickDouble(.03 * (levelNum + 1), .06 * (levelNum + 1));
    if(piercing > 1.0) { piercing = 1.0; }
    double damage = enemyDef * (1.0 - piercing);
    return damage + WeaponDecorator::calculateDamage(playerAtk, enemyDef);
}

#endif
