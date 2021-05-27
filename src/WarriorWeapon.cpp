#ifndef __WARRIOR_WEAPON_CPP__
#define __WARRIOR_WEAPON_CPP__

#include "../header/WarriorWeapon.h"

WarriorWeapon::WarriorWeapon() {
    this->minDamage = 1; 
    this->maxDamage = 1; 
    this->numHits = 1;
    this->critChance = 0;
    this->piercing = 0;
}

WarriorWeapon::WarriorWeapon(double minDamage, double maxDamage, int numHits, double critChance, double piercing) {
    this->minDamage = minDamage; 
    this->maxDamage = maxDamage; 
    this->numHits = numHits;
    this->critChance = critChance;
    this->piercing = piercing;
}

WarriorWeapon::~WarriorWeapon() {

}

double WarriorWeapon::calculateDamage(double playerAtk, double enemyDef ) {
    return this->maxDamage; 
}

double WarriorWeapon::calculateLifeDrain() {
    return 0.0; 
}

#endif