#ifndef __ENEMY_HPP__
#define __ENEMY_HPP__

#include <string>

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
   double getHp(); //getter (hp)
   double getAtk(); //getter (atk)
   double getDef(); //getter (def)
   void attack(Character*); //will target a character and deal damage
   void reduceHp(); //reduces hp
}

#endif //__ENEMY_HPP__
