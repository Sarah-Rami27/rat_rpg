#ifndef __MAGE_CHAR_CPP__
#define __MAGE_CHAR_CPP__

#include "../header/MageChar.h"

MageChar::MageChar() {
    this->name = "Emile The Rat";
    this->atk = 0; 
    this->def = 0;
    this->curHp = 0; 
    this->maxHp = 0;
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
/*
MageChar::MageChar() {

}
*/
void MageChar::attack(Enemy*) {

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
