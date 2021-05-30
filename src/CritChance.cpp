#ifndef __CRIT_CHANCE_CPP__
#define __CRIT_CHANCE_CPP__

#include "../header/CritChance.h"

CritChance::CritChance(Weapon* weapon, int levelNum): WeaponDecorator(weapon, levelNum) {
    while (levelNum > 0) {
        critChance += rng.pickDouble(0.01, 0.02);
        levelNum--; 
    }
}

CritChance::~CritChance() {}

double CritChance::calculateDamage(double playerAtk, double enemyDef) {
    RNG rng;
    if(rng.roll(critChance, 1)) {
        return 2 * WeaponDecorator::calculateDamage(playerAtk, enemyDef); 
    }
    else {
        return WeaponDecorator::calculateDamage(playerAtk, enemyDef);
    }
}

void CritChance::printStats(std::ostream& out) {
    cout << "Crit Chance: " << (critChance * 100) << "%" << endl;
    WeaponDecorator::printStats(out);
}


#endif