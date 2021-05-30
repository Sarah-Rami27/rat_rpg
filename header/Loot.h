#ifndef __LOOT_H__
#define __LOOT_H__

#include <string>
#include <iostream>
#include "Rng.h"
#include "Character.hpp"
#include "ClassTypeFactory.hpp"

using namespace std;

class Loot {
protected:
   RNG rng;
public:
   Weapon* spawnWeapon(int, ClassTypeFactory*);
   Armor* spawnArmor(int, ClassTypeFactory*);
   double spawnFood();
};

#endif //__LOOT_H__
