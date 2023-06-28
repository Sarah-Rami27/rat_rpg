# RAT., AN RPG GAME

Authors: [Michael Dong](https://github.com/toothnnail), [Sarah Ramirez](https://github.com/Sarah-Rami27), [Nicholas Tengbumroong](https://github.com/nicholastengbumroong)

### General Description:
  
Rat. is an infinite RPG rogue like in which you embark as one of two classes. You encounter enemies on each floor and have turn based combat. The enemy can occasionally send out a telegraphed attack in which the player must respond accordingly. Players utilize loot they obtain as the progress to clear the game. This loot includes weapons, armor, and food. All of which are scaled to the current level to make sure the player stays relevant through the game. The weapons have a rare chance to contains perks that enhance combat such as boosted critical strike chance or an extra hit. Players will be able to choose whether or not they pick up the gear drops. The game continues to generate new enemies until the player's health hits 0 or they fail to dodge a special attack.
 
### Why is it important?
Two of our common interests are games and Disney Pixar's "Ratatouille". We wanted to try creating a game ourselves, adding our own flavor to it. We were curious about what goes behind the design of games such as character types and dungeon generation, so we decided to base our project around a rougelike rpg game that would implement these aspects. 

### Language/Tools/Technologies
* [C++](https://www.cplusplus.com/) - Progamming language
* [Git](https://git-scm.com/) - Version control system 
* [Github](https://github.com/) - Holds our repository and kanban board for organizing our workflow. 
* [VSCode](https://code.visualstudio.com/) - Primary code editor we will use to create our program.
* [CMake](https://cmake.org/) - Software for building code into an executable we can run. 
* [Google Test Framework](https://github.com/google/googletest) - A collection of tests that we use to unit test our code. 

### Inputs/Outputs 
#### Inputs: 
  The user will be able to make choices as they progress throughout the game. This will be in the form of combat decisions and choosing whether or not to equip new items.  
#### Outputs: 
  The program will output to text the console. This text will be in the form of prompts, room/enemy description, combat options, etc.  

### Design Patterns 
#### Decorator: 
The decorator design pattern will serve as the basis for our perk system. It will let us attach perks to the player character's equipment as they progress through the game. These perks will be able to stack and have interactions with each other and at any point in the game the character will be able to have multiple perks on them. They will be added or removed depending on actions in the game. We anticpate having issues with modifying the behavior of the player's equipment after the object has already been created. The decorator class allows us to wrap the equipment objects with perks that will alter the behavior or stats of the item.
#### Abstract Factory:
The abstract factory design pattern allows us to have a base character class. This would have multiple playable character variants that the user will be able to choose at the beginning of the game (e.g. fighter/rogue/etc.). We anticipate having issues with maintaining/organizing several distinct character types. Using the abstract factory design pattern lets us have a single basic character interface that will then be implemented by the different character types. Each character type will have their different associated weapons and armor.
 
### Class Diagram
![OMT Diagram](/DesignDocuments/OmtV6.png)
The CharacterFactory class is an implemenation of the Abstract Factory design pattern. It is the interface that the concrete classes, WarriorFactory and MageFactory implement. These two concrete factories will each produce their own version of a Character object. The same applies to both the armor and weapon classes. This allows us to have an associated family of objects within their respective types, such as Warrior or Mage.
In addition, the Weapon class utilizes the Decorator design pattern to allow us to change certain attributes of any given weapon object. So while the weapon can either be a Warrior weapon or a Mage weapon, we also have the ability to apply perks (decorations) to these objects. The WeaponDecorator class extends the abstract Weapon class and then is extended by several differnt perk classes. Each of these classes modify a specific attribute of the weapon. 

## Screenshots
![TITLE](/Screenshots/title.png)
<br /> Screenshot of the Title/Prologue

![INVALID](/Screenshots/invalidInput.png)
<br /> Screenshot of Invalid Input

![COMBAT](/Screenshots/combatHealth.png)
<br /> Screenshot of Hp Displays during combat

![WEAPONDROP](/Screenshots/WeaponDropComparison.png)
<br /> Screenshot of a weapon dropping, player is comparing the stats (shows perks)

![SPECIAL](/Screenshots/unblockedSpecial.png)
<br /> Screenshot of player dying to a special attack

![SPECIALU](/Screenshots/blockedSpecial.png)
<br /> Screenshot of player blocking special and living

![FOOD](/Screenshots/food.png)
<br /> Screenshot of food dropping!

## Installation/Usage
<br /> On this top right of this page, press the green download code button.
<br /> Press on the clipboard next to HTTPS link
<br /> Headover to your terminal and input the following lines after each one runs successfully:

```sh
git clone --recursive <COPIED HTTPS URL>

cd rat_rpg_game

cmake3 .

make

./game
```

To replay the game use the last command! Enjoy! <br />
## Testing

![VALGRIND](/Screenshots/valgrind.png)
![TESTS](/Screenshots/tests.png)

<br /> This project was validated through Valgrind with 0 memory leaks. Unit tests were done on every class and were all passing. Integrated testing was also performed to test interactions between classes. 
 
