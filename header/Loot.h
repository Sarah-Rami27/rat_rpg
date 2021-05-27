#ifndef __LOOT_H__
#define __LOOT_H__

#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Character.hpp"
#include "ClassTypeFactory.hpp"

using namespace std;

class Loot {
public:
   void rollForLoot(int);
   bool roll(int, int);
   Weapon* spawnWeapon(int, ClassTypeFactory*);
   Armor* spawnArmor(int, ClassTypeFactory*);
   double spawnFood();
};

#endif //__LOOT_H__
