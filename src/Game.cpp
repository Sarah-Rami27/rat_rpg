#ifndef __GAME_CPP__
#define __GAME_CPP__

#include "../header/Game.h"
#include <iostream>

using namespace std;

Game::Game() {
    factory = nullptr;
    player = nullptr;
    levelNum = 1; 
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
    cout << endl;
    cout << "Rat Hero!, Pick your next move! (input a number)" << endl;
    cout << "1) Attack the enemy!" << endl;
    cout << "2) Defend!" << endl;
    cout << "Input: ";
}


void Game::createPlayer() {
    this->player = this->factory->createCharacter(); 
}

void Game::spawnEnemy() {
    cout << "You have encountered an enemy!\n";
    this->enemy = new Enemy(this->levelNum);
    cout << enemy->getName() << " approaches!" << endl;
}

void Game::spawnLoot() {
    Loot loot; 
    int playerInput;

    Weapon* newWeapon = loot.spawnWeapon(levelNum, factory); 
    cout << "You found a new weapon!" << endl;
    std::string weaponPrompt = "Do you want to replace your current weapon?\n1) Yes\n2) No\n3) Compare stats\nInput: ";
    
    while (true) {
        cout << weaponPrompt; 
        cin >> playerInput; 
        cout << endl;
        if (playerInput == 1) {
            delete player->getCurrWeapon();
            player->setCurrWeapon(newWeapon);
            cout << "You take the new weapon." << endl;
        }
        else if (playerInput == 2) {
            delete newWeapon; 
            cout << "You leave the new weapon." << endl;
        }
        else if (playerInput == 3) {
            cout << "NEW WEAPON STATS" << endl; 
            cout << "================" << endl;
            newWeapon->printStats(cout);
            cout << endl; 
            cout << "CURRENT WEAPON STATS" << endl; 
            cout << "====================" << endl;
            player->getCurrWeapon()->printStats(cout);
            cout << endl;
            continue; 
        }
        else {
            cout << "Enter a valid input: " << endl;
            continue;
        }
        cout << endl;
        break;
    }
    
    Armor* newArmor = loot.spawnArmor(levelNum, factory);
    cout << "You found new armor!" << endl;
    std::string armorPrompt = "Do you want to replace your current armor?\n1) Yes\n2) No\n3) Compare stats\nInput: ";
    
    while (true) {
        cout << armorPrompt; 
        cin >> playerInput; 
        cout << endl;
        if (playerInput == 1) {
            delete player->getCurrArmor();
            player->setCurrArmor(newArmor);
            cout << "You take the new armor." << endl;
        }
        else if (playerInput == 2) {
            delete newArmor; 
            cout << "You leave the new armor." << endl;
        }
        else if (playerInput == 3) {
            cout << "NEW ARMOR STATS" << endl;
            cout << "===============" << endl; 
            newArmor->printStats(cout); 
            cout << endl;
            cout << "CURRENT ARMOR STATS" << endl; 
            cout << "===================" << endl;
            player->getCurrArmor()->printStats(cout);
            cout << endl;
            continue; 
        }
        else {
            cout << "Enter a valid input: " << endl;
            continue;
        }
        cout << endl;
        break;
    }

    player->increaseHealth(player->getMaxHp() * loot.spawnFood());
    cout << endl;
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
		cout << "You have slain the enemy! Your rat legend continues." << endl << endl;
                if (levelNum % 5 == 0) {
                    spawnLoot();   
                }
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
