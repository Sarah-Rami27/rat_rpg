#ifndef __DAMAGE_INCREASE_CPP__
#define __DAMAGE_INCREASE_CPP__

#include "../header/DamageIncrease.h"

DamageIncrease::DamageIncrease(Weapon* weapon, int levelNum): WeaponDecorator(weapon, levelNum) {
    RNG rng;
    double min = levelNum * 1.5;
    double max = levelNum * 2.5;
    extraDamage = rng.pickDouble(min , max);
}

DamageIncrease::~DamageIncrease() {}

double DamageIncrease::calculateDamage(double playerAtk, double enemyDef) {
    return (extraDamage) +  WeaponDecorator::calculateDamage(playerAtk, enemyDef); 
}

void DamageIncrease::printStats(std::ostream& out) {
    out << "ED: " << extraDamage << " ";
    WeaponDecorator::printStats(out);
}
#endif
