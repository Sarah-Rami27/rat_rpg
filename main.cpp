#include <iostream> 

#include "header/Game.h"


using namespace std;

int main() {

    int userInput; 
    Game game;
    displayCharacterOptions(); 
    cin >> userInput; 
    game.setFactory(userInput);

    return 0;
}

void displayCharacterOptions() {
    cout << "Pick your character type (choose a number)" << endl;
    cout << "1) Warrior" << endl;
    cout << "2) Mage" << endl;
}
