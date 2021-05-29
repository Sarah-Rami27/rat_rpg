#ifndef __GAME_CPP__
#define __GAME_CPP__

#include "../header/Game.h"
#include <iostream>

using namespace std;

Game::Game() {
    factory = nullptr;
    player = nullptr;
    levelNum = 0; 
    enemy = nullptr;
}

Game::~Game() {
    delete factory; 
    delete player; 
    delete enemy;
}

bool Game::isAlive(){
    if(player->getCurHp() <= 0){
        return false;
    }
    return true;
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
    cout << "Pick your next move! (choose a number)" << endl;
    cout << "1) Attack the enemy!" << endl;
    cout << "2) Defend!" << endl;
    cout << "Input: ";
}


void Game::createPlayer() {
    this->player = this->factory->createCharacter(); 
}

void Game::spawnEnemy() {
    cout << "You have encountered an enemy!\n" << endl;
    this->enemy = new Enemy(this->levelNum);
}

void Game::spawnLoot() {

}

void Game::startCombat() {
    spawnEnemy();

    while(player->getCurHp() > 0 && enemy->getHp() > 0){
        int userInput;
        displayOptions();                                   //1) attack 2)defend
        cin >> userInput;

        while(userInput != 1 && userInput != 2){
            cout << "Please enter a valid choice" << endl;
            cin >> userInput;
        }

        if(userInput == 1){
            player->attack(enemy);                              //player attacks first

            if(enemy->getHp() <= 0){                            //player wins
                spawnLoot();
                delete this->enemy;
                ++levelNum;
                return;
            }
        }

        if(userInput == 2){
            player->defend();
        }

        if(enemy->getHp() > 0){                             
            enemy->attack(player);                          //enemy attacks player
            if (player->getCurHp() <= 0) {
                return;                                     //enemy wins
            }
        }

        if(userInput == 2) {
            player->reduceDefense();
        }
    }
}


#endif 
