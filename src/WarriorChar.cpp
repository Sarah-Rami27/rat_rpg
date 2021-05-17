#ifndef __WARRIOR_CHAR_CPP__
#define __WARRIOR_CHAR_CPP__

#include "../header/WarriorChar.h"

WarriorChar::WarriorChar() {
    this->name = "Remy The Rat";
    this->atk = 0; 
    this->def = 0;
    this->hp = 0; 

}

WarriorChar::WarriorChar(string name, double atk, double def, double hp) {
    this->name = name;
    this->atk = atk; 
    this->def = def;
    this->hp = hp; 
}

WarriorChar::WarriorChar() {

}

void WarriorChar::attack(Enemy*) {

}

void WarriorChar::defend() {

}

void WarriorChar::reduceHealth(double damage) {
    if(def < damage){
        this->hp = (this->hp - damage) + this->def;
    }
}

#endif 