# Crashed and Deserted
 
 Authors: \<[Aramis Masarati](https://github.com/Aramismas)\>
 \<[Daria Senchylova](https://github.com/Bumblebee2019)\>
 \<[Joseph Mangapit](https://github.com/badminininja)\>

## Project Description
 * We plan on creating  a story driven game where the user has crash landed on an island and is essentially deserted. The user will have to pick choices given which will determine the unique ending for the user based off all their choices throughout the story. We plan to have multiple endings and routes which creates a butterfly-effect story.
 * This game is important because we are all interested in video game development and we want all users to have a fun and unique experience with the game!
 * The languages/tools/technologies we plan to user are:
   * C++ 
 * Input: text from the keyboard where the user will be able to pick different options that will determine their path in the story.
 * Output: text displayed on the command line terminal. (Terminal based game)
 * For our 3 design patterns, we will use Abstract Factory, Composite, and Strategy.
   * Abstract Factory - This will allow us to implement a base Character class which will be the hierarchy for multiple types of characters. Since we have many different characters with similar traits and actions, it will be useful for us to have an abstract class which contains the interface for the characters. The user will have a character selection in the beginning of the game where we will implement Abstract Factory.
   * Strategy - This will allow us to create algorithms for general use in our game which we can constantly refer to despite being in different situations and progression in the game. This covers alot of code so that the user doesn't see what's going on in the backend of the game. The user will be able to use complicated algorithms with a click of a button regardless of their knowledge of the actual algorithm.
   * Composite - this is a useful pattern for a game since we will be using multiple classes and objects similarly. Since the game will have several characters and some powers they inherit from the base class will be similar, a composite pattern is useful when dealing with repeating code. We will also use some child class manipulation methods that the composite will help us implement.

## Class Diagrams
 
 ![ABSDesignPattern](https://user-images.githubusercontent.com/5094397/101873790-74e25a80-3b3c-11eb-9e8d-b673be0be67a.PNG)
 ![StrategyPattern](https://user-images.githubusercontent.com/5094397/99346702-1df1aa00-284a-11eb-9a93-7786b39f9302.PNG)
 ![SingletonPat](https://user-images.githubusercontent.com/5094397/101873803-79a70e80-3b3c-11eb-89a9-886a5635f624.PNG)

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 * First, clone the repository
 * Open the terminal and run cd ./CrashedAndDesertred/CrashedAndDeserted 
 * Then, run the following commands in the terminal: 
 * cmake3 .
 * make
 * ./game
 ## Testing
 * To ensure that the large number of classes we implemented is error free, we used googletest. With the help of the googeltest, we created unit tests and tested every single function in our classes and verified that they passed their tests through running the test executable.
 ![Code](https://user-images.githubusercontent.com/57073212/101874740-4ebdba00-3b3e-11eb-8491-c73167592c33.PNG)
 * Main Function Tests
   * Selecting Human Mage
     ![HumanMage](https://user-images.githubusercontent.com/5094397/101886244-11fabe80-3b50-11eb-953d-7d29b90c0715.png)
   * Selecting Animal Mage
    ![AnimalMage](https://user-images.githubusercontent.com/5094397/101886246-12935500-3b50-11eb-855f-d487f12a83b5.png)
   * Selecting Animal Warrior
    ![AnimalWarrior](https://user-images.githubusercontent.com/5094397/101886249-13c48200-3b50-11eb-9620-72bed06132b6.png)
   * Selecting Human Warrior
     ![HumanWarrior](https://user-images.githubusercontent.com/5094397/101886252-14f5af00-3b50-11eb-89b5-6077fc44d796.png)
   * Battle Scene EX1
     ![BattleEx1](https://user-images.githubusercontent.com/5094397/101887139-4de25380-3b51-11eb-825c-43abdad90444.png)
   * Battle Scene EX2
     ![BattleEx2](https://user-images.githubusercontent.com/5094397/101887146-4fac1700-3b51-11eb-8294-f5b5f27f9609.png)


 
