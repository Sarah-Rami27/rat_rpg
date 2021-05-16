#ifndef __GAME_CPP__
#define __GAME_CPP__

#include "../header/Game.h"
#include <iostream>

using namespace std;

Game::Game() {

}

Game::~Game() {

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

}

void Game::createPlayer() {
    this->player = factory->createCharacter(); 
}

void Game::spawnEnemy() {

}

void Game::spawnLoot() {

}

void Game::startCombat() {
    //Enemy * enemy = spawnEnemy();
    while(player->getHp() > 0 && enemy->getHp() > 0){

        player->attack(enemy);                              //player attacks first

        if(enemy->getHp() > 0){                             //check hp b4 attack
            enemy->attack(player);                          //enemy attacks player
        }

        if(player->getHp() > 0 && enemy->getHp() <= 0){     //player wins
            //cout << "You have won the battle!" << endl;
            return;
        }

        if(player->getHp() <= 0 && enemy->getHp() > 0){ //enemy wins
            //cout << "ggwp" << endl;
            return;
        }
    }
}


#endif 