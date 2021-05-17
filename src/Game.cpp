#ifndef __GAME_CPP__
#define __GAME_CPP__

#include "../header/Game.h"
#include <iostream>

using namespace std;

Game::Game() {
    factory = nullptr;
    player = nullptr;
    levelNum = 0; 
}

Game::~Game() {
    delete factory; 
    delete player; 
}

void Game::setFactory(int charType) {
    if (charType == 1) {
        this->factory = new WarriorFactory(); 
    }
    else if (charType == 2) {
        this->factory = new MageFactory();
    }
}

void Game::displayOptions() {
    cout << "Pick your next move (choose a number)" << endl;
    cout << "1) Attack the enemy!" << endl;
    cout << "2) Defend!" << endl;
}

}

void Game::createPlayer() {
    this->player = this->factory->createCharacter(); 
}

void Game::spawnEnemy() {

}

void Game::spawnLoot() {

}

void Game::startCombat() {
    spawnEnemy();

    while(player->getHp() > 0 && enemy->getHp() > 0){
        int userInput;
        displayOptions();                                   //1) attack 2)defend
        cin >> userInput;

        if(userInput == 1){
            player->attack(enemy);                              //player attacks first

            if(enemy->getHp() > 0){                             
                enemy->attack(player);                          //enemy attacks player
            }

            if(player->getHp() > 0 && enemy->getHp() <= 0){     //player wins
                //cout << "You have won the battle!" << endl;
                spawnLoot();
                return;
            }

            if(player->getHp() <= 0 && enemy->getHp() > 0){     //enemy wins
                //cout << "ggwp" << endl;
                return;
            } 
        }

        if(userInput == 2){
            player->defend();
        }
        
    }
}


#endif 