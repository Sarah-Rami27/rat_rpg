#ifndef __WARRIOR_CHAR_CPP__
#define __WARRIOR_CHAR_CPP__

#include <iostream>
#include <iomanip>
#include "../header/WarriorChar.h"


WarriorChar::WarriorChar() {
    this->name = "Remy The Rat";
    this->atk = 6; 
    this->def = 5;
    this->curHp = 40;
    this->maxHp = 40;
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
       cout << "You took " << "\033[;31m" << std::fixed << std::setprecision(2) << (damage - this->def) << "\033[0m" << " damage, ouch." << endl;	
	if(curHp <= 0) {
		cout << "\033[;36m\e[1m\n\n\nYour rat legend ends here, you have died hero...\e[0m\033[0m"; 
		return;
	}
       cout << "You have " << "\033[;32m" << std::fixed << std::setprecision(2) << this->curHp << "\033[0m" << " of " << "\033[;32m" << this->maxHp << "\033[0m" << " health remaining!" << endl;
}
    else { cout << "Your defense was too high to take damage! Ratthew, the Gym Rat would be proud." << endl; }
}

void WarriorChar::increaseHealth(double heal) {
    if(curHp == maxHp && heal != 0.00) {
   	cout << "You're full!, best leave that for another adventurer." << endl; 
       cout << "You have " << "\033[;32m" << std::fixed << std::setprecision(2) << this->curHp << "\033[0m" << " of " << "\033[;32m" << this->maxHp << "\033[0m" << " health remaining!" << endl;
    }
    else if(curHp == maxHp) {
	cout << "Well, you didn't need anything anyway" << endl;
       cout << "You have " << "\033[;32m" << std::fixed << std::setprecision(2) << this->curHp << "\033[0m" << " of " << "\033[;32m" << this->maxHp << "\033[0m" << " health remaining!" << endl;
    }
   else if (heal == 0.00) {
	cout << "Your health bar is just as disappointed as Django..." << endl;
       cout << "You have " << "\033[;32m" << std::fixed << std::setprecision(2) << this->curHp << "\033[0m" << " of " << "\033[;32m" << this->maxHp << "\033[0m" << " health remaining!" << endl;
  } 
   else if ((this->curHp + heal) >= this->maxHp) {
       this->curHp = this->maxHp;
       cout << "You fully heal! Rattacular!" << endl;
       cout << "You have " << "\033[;32m" << std::fixed << std::setprecision(2) << this->curHp << "\033[0m" << " of " << "\033[;32m" << this->maxHp << "\033[0m" << " health remaining!" << endl;
   }
   else {
	this->curHp += heal;
	cout << "You heal for " << "\033[;32m" << heal << "\033[0m" << " health!" << endl;
       cout << "You have " << "\033[;32m" << std::fixed << std::setprecision(2) << this->curHp << "\033[0m" << " of " << "\033[;32m" << this->maxHp << "\033[0m" << " health remaining!" << endl;
   }
}

#endif 
