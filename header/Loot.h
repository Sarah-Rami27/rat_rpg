#ifndef __LOOT_H__
#define __LOOT_H__

#include <string>
#include <iostream>
#include "Character.hpp"
#include "ClassTypeFactory.hpp"

using namespace std;

class Loot {
public:
   Weapon* spawnWeapon(int, ClassTypeFactory*);
   Armor* spawnArmor(int, ClassTypeFactory*);
   double spawnFood();
};

#endif //__LOOT_H__
