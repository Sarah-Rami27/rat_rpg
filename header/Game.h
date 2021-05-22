#ifndef __GAME_H__
#define __GAME_H__

#include "ClassTypeFactory.hpp"
#include "WarriorFactory.h"
#include "MageFactory.h"

class Game {
    private: 
        ClassTypeFactory* factory; 
        Character* player; 
        int levelNum; 
        Enemy* enemy; 

    public:
        Game(); 
        ~Game();
        void setFactory(int charType); 
        void displayOptions(); 
        void createPlayer(); 
        void spawnEnemy(); 
        void spawnLoot();
        void startCombat(); 
};

#endif