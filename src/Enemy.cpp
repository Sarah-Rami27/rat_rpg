#ifndef __ENEMY_CPP__
#define __ENEMY_CPP__

#include "../header/Enemy.h"
#include <iostream>

Enemy::Enemy() {
   this->name = "Generic";
   this->hp = 0.0;
   this->atk = 0.0;
   this->def = 0.0;
}

Enemy::Enemy(int levelNum) {
 /* Enemy will be generated based on levelNum 
 *  Current equation: (#/2.0) + 10.0
 */
   this->name = "Chef Skinner " + to_string(levelNum);
   this->hp = (levelNum / 2.0) + 10.0;
   this->atk = (levelNum / 2.0) + 2.0;
   this->def = (levelNum / 2.0);
}

string Enemy::getName() const { return this->name; }

double Enemy::getHp() const { return this->hp; }

double Enemy::getAtk() const { return this->atk; }

double Enemy::getDef() const { return this->def; }

void Enemy::attack(Character* target) {
   cout << this->name << " swings his pan!" << endl;
   target->reduceHealth(this->atk);
}

void Enemy::reduceHealth(double damage) {
   double damageTaken = damage - this->def; 
   if (damageTaken <= 0) {
      cout << "Their defense is too high, " + this->name + " took no damage!" << endl;
   }
   else {
      this->hp -= damageTaken; 
      if (this->hp <= 0) {
         cout << endl << this->name + " took " << "\033[;31m" << damageTaken << "\033[0m" << " damage!" << endl;
         cout << this->name + " died!" << endl;
      }
      else {
	 cout << endl;
         cout << this->name + " took " << "\033[;31m" << damageTaken << "\033[0m" << " damage!" << endl;
         cout << this->name + " has " << "\033[1;35m" << this->hp << "\033[0m" << " health remaining." << endl;
	 cout << endl;
      }
   }
}

#endif //__ENEMY_CPP__
