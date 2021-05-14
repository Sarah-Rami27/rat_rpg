#ifndef _LEVEL_HPP_
#define _LEVEL_HPP_

#include <string>
using namespace std;

class Level {
private:
	int levelNum; //incremented when isClear is true
	bool isClear;
	Enemy* currentEnemy;
	Weapon* currentLoot;
public:
	Room(); //generate the room
	bool scanRoom(); //check to see if the room is cleared or not
	Enemy* spawnEnemy(int levelNum); //spawn enemy according to the level num
	Weapon* spawnLoot(int levelNum); //spawn loot according the level num
};

#endif
