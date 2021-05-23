#ifndef __WARRIOR_CHAR_CPP__
#define __WARRIOR_CHAR_CPP__

#include "../header/WarriorChar.h"


WarriorChar::WarriorChar() {
    this->name = "Remy The Rat";
    this->atk = 0; 
    this->def = 0;
    this->curHp = 0; 
    this->maxHp = 0;
    this->currWeapon = nullptr;
    this->currArmor = nullptr;
}

WarriorChar::WarriorChar(string name, double atk, double def, double hp) {
    this->name = name;
    this->atk = atk; 
    this->def = def;
    this->curHp = hp; 
    this->maxHp = hp;
}

/*
WarriorChar::WarriorChar() {

}
*/

void WarriorChar::attack(Enemy*) {

}

void WarriorChar::defend() {

}

void WarriorChar::reduceHealth(double damage) {
    if(this->def < damage){
       this->curHp = this->curHp - (damage - this->def);
    }
}

void WarriorChar::increaseHealth(double heal) {
   if((this->curHp + heal) >= this->maxHp) {
       this->curHp = this->maxHp;
   }
   else {
	this->curHp += heal;
   }
}

#endif 
