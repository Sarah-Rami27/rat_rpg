#ifndef __WARRIOR_ARMOR_CPP__
#define __WARRIOR_ARMOR_CPP__

#include "../header/WarriorArmor.h"

WarriorArmor::WarriorArmor() {
    this->def = 1; 
}

WarriorArmor::WarriorArmor(double def) {
    this->def = def;
}

WarriorArmor::~WarriorArmor(){

}

double WarriorArmor::getDef() {
    return this->def; 
}

#endif