#ifndef __MAGE_WEAPON_CPP__
#define __MAGE_WEAPON_CPP__

#include "../header/MageWeapon.h"

MageWeapon::MageWeapon() {
    this->minDamage = 1; 
    this->maxDamage = 1; 
    this->numHits = 1;
    this->critChance = 0;
    this->piercing = 0;
}

MageWeapon::MageWeapon(double minDamage, double maxDamage, int numHits, double critChance, double piercing) {
    this->minDamage = minDamage; 
    this->maxDamage = maxDamage; 
    this->numHits = numHits;
    this->critChance = critChance;
    this->piercing = piercing;
}

MageWeapon::~MageWeapon() {

}

double calculateDamage() {

}

double calculateLifeDrain() {
    return 0.0; 
}

#endif