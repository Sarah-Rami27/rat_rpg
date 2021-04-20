 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# RPG GAME
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: [Michael Dong](https://github.com/toothnnail), [Sarah Ramirez](https://github.com/Sarah-Rami27), [Nicholas Tengbumroong](https://github.com/nicholastengbumroong)
 
 > You will be forming a group of **THREE** students and working on an interesting project. A list of proposed project ideas that have been successful in previous quarters is given in the project specifications link on iLearn. You can select an idea from the list, start thinking about the features you will implement, what design patterns can help you implement them, and why. If you want to propose your own original idea, you will have to contact an instructor to discuss the project and obtain written permission before you submit your project proposal. Your project needs to implement two design patterns.The project work should be divided almost equally among team members and each member is expected to work on at least one design pattern (more than one partner may work on a pattern) and some of its test cases. You can of course help each other, but it needs to be clear who will be responsible for which patterns and for which features.
 
 > ## Expectations
 > * Incorporate **at least two** distinct design patterns. You need to include at least *one* design pattern that we will teach this session:
 >   * Composite, Strategy, Abstract Factory, Visitor, or Decorator
 > * All design patterns need to be linked together (it can't be two distinct projects)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group.

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include
 > * Why is it important or interesting to you?
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [toolname](link) - Short description
 > * What will be the input/output of your project?
 > * What are the two design patterns you will be using? For each design pattern you must explain in 4-5 sentences:
 >   * Why you picked this pattern and what feature you will implement with it
 >   * What problem you anticipate encountering when implementing your project that you will solve using the design pattern
 >   * Why the chosen design pattern will lead to a good solution to that problem
 > * This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 
 > 
 ### General Description:
 >  
 > Our project is similar to an "infinite" roguelike text-based rpg, in which the player advances through randomly generated dungeon rooms. These rooms contain randomly generated enemies whose stats scale with the room number. Every fixed interval, the player is presented with a boss encounter, awarding the player with a choice of a perk. A perk may be a stat boost or new combat effect (e.g. ATK+2 or double hit). The game will save the players high score (highest room level achieved). There is a loot system in which the player will receive items for clearing a floor. These items will provide the player with stat boosts as they progress through the game. 
 > 
 ### Why is it important?
 > One of our common interests is games. We wanted to try creating a game ourselves, adding our own flavor to it. We were curious about what goes behind the design of games such as character types and dungeon generation, so we decided to base our project around a rougelike rpg game that would implement these aspects. 
 > 
 ### Language/Tools/Technologies
 > * [C++](https://www.cplusplus.com/) - Progamming language
 > * [Git](https://git-scm.com/) - Version control system 
 > * [Github](https://github.com/) - Holds our repository and kanban board for organizing our workflow. 
 > * [VSCode](https://code.visualstudio.com/) - Primary code editor we will use to create our program.
 > * [CMake](https://cmake.org/) - Software for building code into an executable we can run. 
 > * [Google Test Framework](https://github.com/google/googletest) - A collection of tests that we use to unit test our code. 
 
 ### Inputs/Outputs
 > #### Inputs: 
 > > The user will be able to make choices as they progress throughout the game. This will be in the form of combat decisions, accessing/using items from inventory, and choosing whether or not to equip new items.  
 > #### Outputs: 
 > > The program will output to text the console. This text will be in the form of prompts, room/enemy description, combat options, etc.  
 
 ### Design Patterns
 > #### Decorator: 
 > > The decorator design pattern will serve as the basis for our perk system. It will let us attach perks to the player character's equipment as they progress through the game. These perks will be able to stack and have interactions with each other and at any point in the game the character will be able to have multiple perks on them. They will be added or removed depending on actions in the game. We anticpate having issues with modifying the behavior of the player's equipment after the object has already been created. The decorator class allows us to wrap the equipment objects with perks that will alter the behavior or stats of the item.
 > #### Abstract Factory:
 > > The abstract factory design pattern allows us to have a base character class. This would have multiple playable character variants that the user will be able to choose at the beginning of the game (e.g. fighter/rogue/etc.). We anticipate having issues with maintaining/organizing several distinct character types. Using the abstract factory design pattern lets us have a single basic character interface that will then be implemented by the different character types.
 
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
