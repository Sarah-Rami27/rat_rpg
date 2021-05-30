#ifndef __MAGE_CHAR_CPP__
#define __MAGE_CHAR_CPP__

#include "../header/MageChar.h"

MageChar::MageChar() {
    this->name = "Emile The Rat";
    this->atk = 8; 
    this->def = 2;
    this->curHp = 16; 
    this->maxHp = 16;
    this->currWeapon = new MageWeapon();
    this->currArmor = new MageArmor();
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
    cout << endl << "You assume a defensive position." << endl;
    this->def *= 1.5;
}

void MageChar::reduceDefense() {
    this->def /= 1.5; 
}

void MageChar::reduceHealth(double damage) {
    if(this->def < damage){
        this->curHp = this->curHp - (damage - this->def);
    	cout << "You took " << "\033[;31m" << damage << "\033[0m" << " damage, ouch." << endl;	
    }
    else { cout << "Your defense was too high to take damage! Ratthew, the gym rat would be proud." << endl; } 
}

void MageChar::increaseHealth(double heal) {
    if((this->curHp + heal) >= this->maxHp) {
	this->curHp = this->maxHp;
	cout << "You fully heal!, Rattacular!" << endl;
    }
    else {
	this->curHp += heal;
	cout << "You heal for " << "\033[;32m" << heal << "\033[0m" << " !" << endl;
    }
}

#endif 
