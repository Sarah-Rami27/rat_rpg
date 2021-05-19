#ifndef __LOOT_H__
#define __LOOT_H__

#include <string>
#include <stdlib.h>
#include <time.h>
#include "Character.hpp"
#include "CharacterFactory.hpp"

using namespace std;

class Loot {
private:
   bool drop;
   double goodRolls;
   double allRolls;
public:
   void rollForLoot(int);
   bool roll(int, int);
   Weapon* spawnWeapon(int, CharacterFactory*);
   Armor* spawnArmor(int, CharacterFactory*);
   void spawnFood();
};

#endif //__LOOT_H__
