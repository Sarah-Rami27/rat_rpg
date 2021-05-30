#include <iostream> 
#include <time.h>

#include "header/Game.h"


using namespace std;

void displayCharacterOptions(); 
void displayTitle();

int main() {
    srand(time(NULL)); //for Rng class functions
    int userInput; 
    Game game;
    displayTitle();
    displayCharacterOptions(); 
    cin >> userInput;

    while(userInput != 1 && userInput != 2){
        cout << "Please enter a valid choice" << endl;
        cin >> userInput;
    } 
    
    cout << endl;
    game.setFactory(userInput);
    game.createPlayer();
    while(game.isAlive()){
        game.startCombat(); 
    }

    return 0;
}

void displayCharacterOptions() {
    cout << "Pick your Rat Hero! (choose a number)" << endl;
    cout << "1) Remy The Warrior" << endl;
    cout << "2) Emile The Mage" << endl;
    cout << "Input: ";
}

void displayTitle(){
    cout << R"(

            )      ______  ___ _____     )      
           (__     | ___ \/ _ \_   _|   (__     
           _  )_   | |_/ / /_\ \| |     _  )_   
          (_)_(_)  |    /|  _  || |    (_)_(_)  
           (o o)   | |\ \| | | || |_    (o o)   
          ==\o/==  \_| \_\_| |_/\_(_)  ==\o/== 
	
	      )" << endl;

}


