#ifndef __EXTRA_HIT_CPP__
#define __EXTRA_HIT_CPP__

#include "../header/ExtraHit.h"

ExtraHit::ExtraHit(Weapon* weapon, int levelNum): WeaponDecorator(weapon, levelNum){}

ExtraHit::~ExtraHit(){}

double ExtraHit::calculateDamage(double playerAttack, double enemyDef){
    return 2 * WeaponDecorator::calculateDamage(playerAttack, enemyDef);
}

void ExtraHit::printStats(std::ostream& out) {
    cout << "Extra Hits: 1" << endl;
    WeaponDecorator::printStats(out);
}

#endif