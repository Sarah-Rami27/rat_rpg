#ifndef __DAMAGE_INCREASE_CPP__
#define __DAMAGE_INCREASE_CPP__

#include "../header/DamageIncrease.h"

DamageIncrease::DamageIncrease(Weapon* weapon): WeaponDecorator(weapon) {}

DamageIncrease::~DamageIncrease() {}

double DamageIncrease::calculateDamage(double playerAtk, double enemyDef) {
    return 10 + WeaponDecorator::calculateDamage(playerAtk, enemyDef); 
}
#endif