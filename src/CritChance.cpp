#ifndef __CRIT_CHANCE_CPP__
#define __CRIT_CHANCE_CPP__

#include "../header/CritChance.h"

CritChance::CritChance(Weapon* weapon, int levelNum): WeaponDecorator(weapon, levelNum) {}

CritChance::~CritChance() {}

double CritChance::calculateDamage(double playerAtk, double enemyDef) {
    double critChance = 0.05; 
    RNG rng;
    while (levelNum > 0) {
        critChance += rng.pickDouble(0.02, 0.04);
        levelNum--; 
    }
    if(rng.rollDouble(critChance, 1.0)) {
        return 2 * WeaponDecorator::calculateDamage(playerAtk, enemyDef); 
    }
    else {
        return WeaponDecorator::calculateDamage(playerAtk, enemyDef);
    }
}


#endif
