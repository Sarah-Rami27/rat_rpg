#ifndef __ENEMY_CPP__
#define __ENEMY_CPP__

#include "../header/Enemy.h"

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
   this->name = "Big Bad Number: " + to_string(levelNum);
   this->hp = (levelNum / 2.0) + 10.0;
   this->atk = (levelNum / 2.0) + 10.0;
   this->def = (levelNum / 2.0) + 10.0;
}

string Enemy::getName() const { return this->name; }

double Enemy::getHp() const { return this->hp; }

double Enemy::getAtk() const { return this->atk; }

double Enemy::getDef() const { return this->def; }

void Enemy::attack(Character* target) {
   target->reduceHealth(this->atk);
}

void Enemy::reduceHealth(double damage) {
   if(this->def < damage) { //if there is not enough defense to negate all damage
   	this->hp = this->hp - (damage - this->def);
   }
}

#endif //__ENEMY_CPP__
