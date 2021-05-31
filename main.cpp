#include <iostream> 
#include <time.h>

#include "header/Game.h"


using namespace std;

void displayCharacterOptions(); 
void displayTitle();
void displayLore();
void preMsg();

int main() {
    srand(time(NULL)); //for Rng class functions
    int userInput; 
    Game* game = new Game();
    displayTitle();
    displayLore();
    displayCharacterOptions(); 
    cin >> userInput;
    if(cin.fail()) {
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    while(userInput != 1 && userInput != 2){
        cout << "Please enter a valid choice: ";
        cin >> userInput;
    	if(cin.fail()) {
    	    cin.clear();
    	    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    	}
    } 
    
    cout << endl;

    game->setFactory(userInput);
    game->createPlayer();
    while(game->isAlive()){
        game->startCombat(); 
    }
	delete game;
    return 0;
}

void displayCharacterOptions() {
    cout << "Pick your Rat Hero! (choose a number)" << endl;
    cout << "1) Remy The Warrior" << endl;
    cout << "2) Emile The Mage" << endl;
    cout << "Input: ";
}

void displayTitle(){
    cout << "\033[1;37m" << R"(

            )      ______  ___ _____     )      
           (__     | ___ \/ _ \_   _|   (__     
           _  )_   | |_/ / /_\ \| |     _  )_   
          (_)_(_)  |    /|  _  || |    (_)_(_)  
           (o o)   | |\ \| | | || |_    (o o)   
          ==\o/==  \_| \_\_| |_/\_(_)  ==\o/== 
	
	      )" << "\033[0m" << endl;

}

void displayLore() {
    cout << "\033[1;35mIn the crumbling ruins of the Rat Clan, lies a bedridden Django. As Rat King, his impending demise" << endl;
    cout << "would lead to a vacuum in power. As the two competing front-running heirs to the crown, Remy and Emile would have to" << endl;
    cout << "prove themselves worthy. Django has tasked them to enter the sewers to do so...\033[0m" << endl << endl;
}

void preMsg() {
    cout << "\033[1;35m\"Venture forth my son...prove thyself worthy. Become the Rat Clan's ray of hope...\"" << endl;
    cout << " - Django, Scourge King of the Wastes (the local trash bin)" << endl;
    cout << endl;
    cout << "You descend into the sewers...time to do or die..." << endl;
    cout << "A voice in your head whispers...\"Anyone can cook!\"" << endl;
    cout << "..." << endl;
    cout << "Whatever that means...\033[0m" << endl << endl;
}
