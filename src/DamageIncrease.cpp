#ifndef __DAMAGE_INCREASE_CPP__
#define __DAMAGE_INCREASE_CPP__

#include "../header/DamageIncrease.h"

DamageIncrease::DamageIncrease(Weapon* weapon, int levelNum): WeaponDecorator(weapon, levelNum) {}

DamageIncrease::~DamageIncrease() {}

double DamageIncrease::calculateDamage(double playerAtk, double enemyDef) {
    RNG rng;
    double min = levelNum * 1.5;
    double max = levelNum * 2.5;
    double result = rng.pickDouble(min , max);
    return (result) +  WeaponDecorator::calculateDamage(playerAtk, enemyDef); 
}
#endif
