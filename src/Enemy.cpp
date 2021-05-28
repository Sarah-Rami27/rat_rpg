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
   this->name = "Joe Mama " + to_string(levelNum);
   this->hp = (levelNum / 2.0) + 10.0;
   this->atk = (levelNum / 2.0) + 2.0;
   this->def = (levelNum / 2.0);
}

string Enemy::getName() const { return this->name; }

double Enemy::getHp() const { return this->hp; }

double Enemy::getAtk() const { return this->atk; }

double Enemy::getDef() const { return this->def; }

void Enemy::attack(Character* target) {
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
         cout << this->name + " died!" << endl;
      }
      else {
         cout << this->name + " took " << damageTaken << " damage!" << endl;
         cout << this->name + " has " << this->hp << " health remaining." << endl;
      }
   }
}

#endif //__ENEMY_CPP__
