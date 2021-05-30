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
    std::string weaponPrompt = "Do you want to replace your current weapon?\n1) Yes\n2) No\n3) Compare stats\n";
    cout << weaponPrompt; 
    cin >> playerInput; 
    while (playerInput != 1 && playerInput != 2 && playerInput != 3) {
        switch (playerInput) {
            case 1: 
                delete player->getCurrWeapon();
                player->setCurrWeapon(newWeapon);
            case 2: 
                delete newWeapon; 
            case 3: 
                cout << "NEW WEAPON STATS" << endl; 
                newWeapon->printStats(cout); 
                cout << "CURRENT WEAPON STATS" << endl; 
                player->getCurrWeapon()->printStats(cout);
                cout << weaponPrompt;
                cin >> playerInput; 
            default: 
                cout << "Enter a valid input: " << endl; 
                cin >> playerInput; 
        }
    }

    Armor* newArmor = loot.spawnArmor(levelNum, factory);
    cout << "You found new armor!" << endl;
    std::string armorPrompt = "Do you want to replace your current armor?\n1) Yes\n2) No\n3) Compare stats\n";
    cout << armorPrompt; 
    cin >> playerInput; 
    while (playerInput != 1 && playerInput != 2 && playerInput != 3) {
        switch (playerInput) {
            case 1: 
                delete player->getCurrArmor();
                player->setCurrArmor(newArmor);
            case 2: 
                delete newArmor; 
            case 3: 
                cout << "NEW ARMOR STATS" << endl; 
                newArmor->printStats(cout); 
                cout << "CURRENT ARMOR STATS" << endl; 
                player->getCurrArmor()->printStats(cout);
                cout << armorPrompt;
                cin >> playerInput; 
            default: 
                cout << "Enter a valid input: " << endl; 
                cin >> playerInput; 
        }
    }

    player->increaseHealth(loot.spawnFood());

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
