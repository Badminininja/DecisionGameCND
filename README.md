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
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
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
 
