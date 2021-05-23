#include <iostream> 

#include "header/Game.h"


using namespace std;

int main() {

    int userInput; 
    Game game;
    displayCharacterOptions(); 
    cin >> userInput;

    while(userInput != 1 && userInput != 2){
        //cout << "Please enter a valid choice" << endl;
        cin >> userInput;
    } 

    game.setFactory(userInput);
    game.createPlayer(); 

    return 0;
}

void displayCharacterOptions() {
    cout << "Pick your character type (choose a number)" << endl;
    cout << "1) Warrior" << endl;
    cout << "2) Mage" << endl;
}
