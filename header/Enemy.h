#ifndef __ENEMY_H__
#define __ENEMY_H__

#include <string>
#include "Character.hpp"

using namespace std;

class Enemy {
private:
   string name;
   double hp;
   double atk;
   double def;
public:
   Enemy();
   Enemy(int); //creates enemy scaled to level (int)
   string getName() const; //getter (name)
   double getHp() const; //getter (hp)
   double getAtk() const; //getter (atk)
   double getDef() const; //getter (def)
   void attack(Character*); //will target a character and deal damage
   void reduceHealth(double); //reduces hp
};

#endif //__ENEMY_H__
