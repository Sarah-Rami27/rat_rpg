#ifndef __WARRIOR_WEAPON_CPP__
#define __WARRIOR_WEAPON_CPP__

#include "../header/WarriorWeapon.h"


WarriorWeapon::WarriorWeapon() {
    this->minDamage = 1; 
    this->maxDamage = 2; 
}

WarriorWeapon::WarriorWeapon(double minDamage, double maxDamage) {
    this->minDamage = minDamage; 
    this->maxDamage = maxDamage; 
}

WarriorWeapon::~WarriorWeapon() {

}

double WarriorWeapon::calculateDamage(double playerAtk, double enemyDef ) {
    return playerAtk + rng.pickDouble(minDamage, maxDamage); 
}

#endif
