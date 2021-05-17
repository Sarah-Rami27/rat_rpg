#ifndef __ENEMY_CPP__
#define __ENEMY_CPP__

#include "../header/Enemy.hpp"

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

void Enemy::attack(Character* target) {
   target->reduceHp(this->atk);
}

void Enemy::reduceHp(double damage) {
   if(this->def < damage) { //if there is not enough defense to negate all damage
   	this->hp = this->hp - (this->damage - this->def);
   }
}

#endif //__ENEMY_CPP__
