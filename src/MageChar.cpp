#ifndef __MAGE_CHAR_CPP__
#define __MAGE_CHAR_CPP__

#include "../header/MageChar.h"

MageChar::MageChar() {
    this->name = "Emile The Rat";
    this->atk = 8; 
    this->def = 2;
    this->curHp = 16; 
    this->maxHp = 16;
    this->currWeapon = nullptr;
    this->currArmor = nullptr;
}

MageChar::MageChar(string name, double atk, double def, double hp) {
    this->name = name;
    this->atk = atk; 
    this->def = def;
    this->curHp = hp; 
    this->maxHp = hp;
}

MageChar::~MageChar() {
    delete this->currWeapon;
    delete this->currArmor;
}

void MageChar::attack(Enemy* enemy) {
    double damage = this->currWeapon->calculateDamage(this->atk, enemy->getDef());
    enemy->reduceHealth(damage);
}

void MageChar::defend() {

}

void MageChar::reduceHealth(double damage) {
    if(this->def < damage){
        this->curHp = this->curHp - (damage - this->def);
    }
}

void MageChar::increaseHealth(double heal) {
    if((this->curHp + heal) >= this->maxHp) {
	this->curHp = this->maxHp;
    }
    else {
	this->curHp += heal;
    }
}

#endif 
