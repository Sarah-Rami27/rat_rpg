#ifndef __MAGE_CHAR_CPP__
#define __MAGE_CHAR_CPP__

#include "../header/MageChar.h"

MageChar::MageChar() {
    this->name = "Emile The Rat";
    this->atk = 0; 
    this->def = 0;
    this->hp = 0; 

}

MageChar::MageChar(string name, double atk, double def, double hp) {
    this->name = name;
    this->atk = atk; 
    this->def = def;
    this->hp = hp; 
}

MageChar::MageChar() {

}

void MageChar::attack(Enemy*) {

}

void MageChar::defend() {

}

void MageChar::reduceHealth(double damage) {
    if(this->def < damage){
        this->hp = (this->hp - damage) + this->def;
    }
 }

#endif 