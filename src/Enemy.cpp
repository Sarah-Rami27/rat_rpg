#ifndef __ENEMY_CPP__
#define __ENEMY_CPP__

#include "../header/Enemy.hpp"

Enemy::Enemy() {
   this->name = "Generic";
   this->health = 0.0;
   this->atk = 0.0;
   this->defense = 0.0;
}

Enemy::Enemy(int levelNum) {
 /* Enemy will be generated based on levelNum 
 *  Current equation: (#/2.0) + 10.0
 */
   this->name = "Big Bad Number: " + to_string(levelNum);
   this->health = (levelNum / 2.0) + 10.0;
   this->atk = (levelNum / 2.0) + 10.0;
   this->defense = (levelNum / 2.0) + 10.0;
}

void Enemy::attack(Character* target) {
   target->reduceHealth(this->atk);
}

void Enemy::reduceHealth(double damage) {
   if(this->defense < damage) { //if there is not enough defense to negate all damage
   	this->health = this->health - (this->damage - this->defense);
   }
}

#endif //__ENEMY_CPP__
