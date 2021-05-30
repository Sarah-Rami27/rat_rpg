#ifndef __MAGE_WEAPON_CPP__
#define __MAGE_WEAPON_CPP__

#include "../header/MageWeapon.h"

MageWeapon::MageWeapon() {
    this->minDamage = 1; 
    this->maxDamage = 2; 
}

MageWeapon::MageWeapon(double minDamage, double maxDamage) {
    this->minDamage = minDamage; 
    this->maxDamage = maxDamage; 
}

MageWeapon::~MageWeapon() {

}

double MageWeapon::calculateDamage(double playerAtk, double enemyDef) {
    return playerAtk + rng.pickDouble(minDamage, maxDamage); 
}

double MageWeapon::calculateLifeDrain() {
    return 0.0; 
}

#endif