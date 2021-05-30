#ifndef __WARRIOR_CHAR_CPP__
#define __WARRIOR_CHAR_CPP__

#include "../header/WarriorChar.h"


WarriorChar::WarriorChar() {
    this->name = "Remy The Rat";
    this->atk = 4; 
    this->def = 10;
    this->curHp = 20; 
    this->maxHp = 20;
    this->currWeapon = new WarriorWeapon();
    this->currArmor = new WarriorArmor();
}

WarriorChar::WarriorChar(string name, double atk, double def, double hp) {
    this->name = name;
    this->atk = atk; 
    this->def = def;
    this->curHp = hp; 
    this->maxHp = hp;
}


WarriorChar::~WarriorChar() {
    delete currWeapon; 
    delete currArmor; 
}


void WarriorChar::attack(Enemy* enemy) {
    double damage = this->currWeapon->calculateDamage(this->atk, enemy->getDef());
    enemy->reduceHealth(damage);
}

void WarriorChar::defend() {
    cout << endl << "You assume a defensive position." << endl;
    this->def *= 2.0; 
}

void WarriorChar::reduceDefense() {
    this->def /= 2.0; 
}

void WarriorChar::reduceHealth(double damage) {
    if(this->def < damage){
       this->curHp = this->curHp - (damage - this->def);
       cout << "You took " << "\033[;31m" << damage << "\033[0m" << " damage, ouch." << endl;	
    }
    else { cout << "Your defense was too high to take damage! Ratthew, the Gym Rat would be proud." << endl; }
}

void WarriorChar::increaseHealth(double heal) {
   if((this->curHp + heal) >= this->maxHp) {
       this->curHp = this->maxHp;
       cout << "You fully heal! Rattacular!" << endl;
   }
   else {
	this->curHp += heal;
	cout << "You heal for " << "\033[;32m" << heal << "\033[0m" << " !" << endl;
   }
}

#endif 
