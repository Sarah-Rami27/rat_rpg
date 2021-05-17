#ifndef __MAGE_ARMOR_CPP__
#define __MAGE_ARMOR_CPP__

#include "../header/MageArmor.h"

MageArmor::MageArmor() {
    this->def = 1; 
}

MageArmor::MageArmor(double def) {
    this->def = def;
}

MageArmor::~MageArmor(){

}

double MageArmor::getDef() {
    return this->def; 
}

#endif