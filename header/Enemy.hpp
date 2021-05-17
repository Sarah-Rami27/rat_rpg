#ifndef __ENEMY_HPP__
#define __ENEMY_HPP__

#include <string>

using namespace std;

class Enemy {
private:
   string name;
   double health;
   double atk;
   double defense;
public:
   Enemy();
   Enemy(int); //creates enemy scaled to level (int)
   double getHealth(); //getter (hp)
   double getAtk(); //getter (atk)
   double getDefense(); //getter (def)
   void attack(Character*); //will target a character and deal damage
   void reduceHealth(); //reduces hp
}

#endif //__ENEMY_HPP__
