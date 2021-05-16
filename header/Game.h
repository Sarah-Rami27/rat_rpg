#ifndef __GAME_H__
#define __GAME_H__

#include "CharacterFactory.hpp"

class Game {
    private:
        Character* player; 
        int levelNum; 
        //Enemy* enemy; 

    public:
        Game(); 
        ~Game();
        void displayOptions(); 
        void createPlayer(); 
        void spawnEnemy(); 
        void spawnLoot();
        void startCombat(); 
};

#endif