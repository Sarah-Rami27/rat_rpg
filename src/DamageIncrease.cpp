#ifndef __DAMAGE_INCREASE_CPP__
#define __DAMAGE_INCREASE_CPP__

#include "../header/DamageIncrease.h"

DamageIncrease::DamageIncrease(Weapon* weapon, int levelNum): WeaponDecorator(weapon, levelNum) {}

DamageIncrease::~DamageIncrease() {}

double DamageIncrease::calculateDamage(double playerAtk, double enemyDef) {
    return (levelNum * 2) + WeaponDecorator::calculateDamage(playerAtk, enemyDef); 
}
#endif