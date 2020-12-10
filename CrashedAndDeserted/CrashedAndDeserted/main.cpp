//
//  main.cpp
//  CrashedAndDeserted
//
//

#include <iostream>
#include <vector>
#include "characterRace.hpp"
#include "animalRace.hpp"
#include "humanRace.hpp"
//#include "ExiledMember.hpp"
//#include "Boss.hpp"
//#include "Goblin.hpp"
#include "Dice20App.hpp"

using namespace std;

Character* openingScene(CharacterRace* typeCharacter, Character* userCharacter);
int firstScene(Character* userCharacter, vector<string> progress);
int beachScene(Character* userCharacter, vector<string> progress);
int BeachDialogue();
//bool GoblinBattle(Character* player);
//bool ExiledMemberBattle(Character* player);
//bool BossBattle(Character* player);

int main() {
    CharacterRace* typeCharacter;
    Character* userCharacter;
    int sceneNum;
    vector<string> progress;
    //Will have to make a Character class that inherits the Mage and Warrior classes
    userCharacter = openingScene(typeCharacter,userCharacter);
    sceneNum = firstScene(userCharacter, progress);
    int tempBeachScene = beachScene(userCharacter, progress);
    return 0;
}

Character* openingScene(CharacterRace* typeCharacter, Character* userCharacter) {
    string name;
    Character* character;
    int response = 0;
    cout << "SCENE: Court Room" << endl;
    cout << "Judge: Who is the next person up for judgment?" << endl;
    cout << "Deputy: State your name to the judge." << endl;
    getline(cin, name);
    cout << "Judge: Ok " << name << ", is your race an animal or human?" << endl;
    cout << "(Enter 1 for animal or 2 for human)" << endl;
    while ((response != 1) && (response != 2)) {
        cin >> response;
        if (response == 1) {
            typeCharacter = new AnimalRace();
        } else if (response == 2) {
            typeCharacter = new HumanRace();
        } else {
            cout << "Judge: No funny business, please tell me your race." << endl;
            cout << "(Enter 1 for animal or 2 for human)" << endl;
        }
    }
    cout << "Judge: So " << name << ", what is your profession?" << endl;
    cout << "(Enter 1 for warrior or 2 for mage)" << endl;
    response = 0;
    while ((response != 1) && (response != 2)) {
        cin >> response;
        if (response == 1) {
            character = typeCharacter->createWarrior(name);
        } else if (response == 2) {
            character = typeCharacter->createMage(name);
        } else {
            cout << "Judge: No funny business, please tell me your profession." << endl;
            cout << "(Enter 1 for warrior or 2 for mage)" << endl;
        }
    }
    cout << "Judge: For the betrayal of your team and murder for your partner, you are sentenced to death by hanging" << endl;
    cout << name << ": Your honor please, my reasons are valid; I should not have my life taken away." << endl;
    cout << "Judge: Valid or invalid, your crimes are still clear, but if you still believe your life should not be taken, then you shall be exiled on the abandoned island." << endl;
    cout << name << ": But your honor-" << endl;
    cout << "Judge: Silence, your sentence is final. Guards, take him away." << endl << endl;
    return character;
}

int firstScene(Character* userCharacter, vector<string> progress) {
    int response = 0;
    int scene = 0;
    cout << "SCENE: Stranded Beach" << endl;
    cout << "You wake up from being unconcious on the unknown beach." << endl;
    cout << "You look left and right and do not see a single man made object in sight." << endl;
    cout << "Behind you is an unclimbable mountain." << endl;
    cout << "To the right is the ocean." << endl;
    cout << "To the left is the forest." << endl;
    cout << "Up ahead is the rest of the beach." << endl;
    cout << "You can't climb the mountain or swim in the ocean" << endl;
    cout << "Which route do you take?" << endl;
    cout << "(Enter 1 to venture into the forest)" << endl;
    cout << "(Enter 2 to trek along the beach)" << endl;
    cout << "(Enter 3 to view your stats)" << endl;
    while ((response != 1) && (response != 2)) {
        cin >> response;
        if (response == 1) {
            cout << "You decided to brave the dark forest." << endl;
            progress.push_back("You decided to brave the dark forest.");
            scene = 1;
        } else if (response == 2) {
            cout << "You decided to walk along the beach." << endl;
            progress.push_back("You decided to walk along the beach.");
            scene = 2;
        } else if (response == 3) {
            userCharacter->stats();
            cout << endl;
            cout << "(Enter 1 to venture into the forest)" << endl;
            cout << "(Enter 2 to trek along the beach)" << endl;
            cout << "(Enter 3 to view your stats)" << endl;
        } else {
            cout << "Idly standing here won't keep you alive (Wrong Input)." << endl;
            cout << "(Enter 1 to venture into the forest)" << endl;
            cout << "(Enter 2 to trek along the beach)" << endl;
            cout << "(Enter 3 to view your stats)" << endl;
        }
    }
    return scene;
}
int beachScene(Character* userCharacter, vector<string> progress){
	int response = 0;
	cout<< "As you go down the beach, you notice how clear it is. Just sand and rocks. You don’t spot any pollution around or littered on the beach; until you come across what seems to be some near a rock cluster. You move to the side to get a better view of what might be behind the rock and you see someone who is sleeping there, understandably so as the sun has just risen."<<endl;
	cout << "What do you do?"<<endl;
	cout << "Call out to him from afar to wake him up and talk to him? (Enter 1)"<<endl;
	cout << "Go up to him and shake him to make sure he wakes up? You gotta be sure he wakes up else you will continue to be clueless of this situation. (Enter 2)"<<endl;
	cout << "Ignore him and keep walking along the beach? Who knows who or what he is, it's best to just leave him be. Plus, he is sleeping so might as well let him sleep. (Enter 3)" <<endl;
	while((response !=1) && (response !=2) && (response !=3)){
		cin >> response;
		if(response ==1){
			cout << "The guy sleeping woke up and noticed you. He does an inviting gesture and you walk up a bit closer so you can talk to him." <<endl;//DIALOGUE
			return BeachDialogue();
		}
		else if(response == 2){
			cout << "As you shake him vigorously to wake him up, the guy gets startled and wakes up; however, as a defensive reaction to his sudden awakening he hit you with a rock that he was holding while sleeping. (Player takes damage) “Oh man, sorry, I didn’t mean to hit you, it's just that I thought you might have been like a bear or something, it was just a reflex” the stranger says. He then sits up and asks if you want to know anything as it was the least he could do." <<endl; //DIALOGUE
			return BeachDialogue();	
		}
		else if (response == 3){
			cout << "As you walk past him you start to notice how run down his area was, but it’s none of your business. As you walk a few paces past what you could only assume was his area, you start to hear a waterfall nearby and that's when you get stabbed in the back from the guy that was supposedly sleeping. (Player takes damage). The guy was never actually sleeping and you simply showed your back to a potential enemy. You were an exiled on this beach, if he’s there then he must be one too. He loads up a second strike but he you parry it and you guys fight." <<endl;
			//call Battle Function
		}
		else{
			cout << "Call out to him from afar to wake him up and talk to him? (Enter 1)"<<endl;
        		cout << "Go up to him and shake him to make sure he wakes up? You gotta be sure he wakes up else you will continue to be clueless of this situation. (Enter 2)"<<endl;
        		cout << "Ignore him and keep walking along the beach? Who knows who or what he is, it's best to just leave him be. Plus, he is sleeping so might as well let him sleep. (Enter 3)" <<endl;
		}
	}


}
int BeachDialogue(){
	int response = 0;
	cout << "Hey, my name is Octavius, Tane Octavius, I’ve been here for a short while now, is there anything you wanted to know? I don’t have much better things to do right now and I don’t mind the company." <<endl;
	cout << "What do you want to know?" <<endl;
	cout << "Ask about the area (Enter 1)" <<endl;
	cout << "Ask how he got here (Enter 2)" <<endl;
	cout << "Ask if he knows if there is anyone else around (Enter 3)" <<endl;
	cout << "Ask why is he here on this island (Enter 4)" << endl;
	cout << "You know all that you need to know, say a farewell and continue along the beach (Enter 5)" << endl;
	while((response !=4) && (response !=5)){
		cin >>response;
		if (response == 1){
			cout << "So far as I know, this place is a small island, located who knows where. The forest covers most of the area, there’s plenty of food in there so it's pretty easy to continue living here." <<endl;
			cout << "Anything else you want to know? (1 area, 2 how, 3 anyone, 4 why, 5 leave)" <<endl;
		}
		else if (response == 2){
			cout << "I’m not entirely sure how I got here, at one point I got knocked out and then I woke up on this Island, I don’t know how I was put here nor the people who did it. Though that was a long time ago so that matters little now." <<endl;
                        cout << "Anything else you want to know? (1 area, 2 how, 3 anyone, 4 why, 5 leave)" <<endl;
		}	
		else if (response == 3){
			cout << "I haven’t actually seen anyone around but I do hear noises that I can only assume are other people. Or maybe even mystical creatures, who knows. I don’t know their business whether they are hostile or friendly so I haven’t confronted them." <<endl;
                        cout << "Anything else you want to know? (1 area, 2 how, 3 anyone, 4 why, 5 leave)" <<endl;

		}
		else if (response == 4){
			cout << "How about before I answer that we go into the forest? It's morning and I haven’t had anything to eat and I’m sure you haven’t either. There is a lot of food in the forest as it seems there has been little human intervention." <<endl;
			//BATTLE TRIGGER
			cout << "You both start walking into the forest with Tane leading to a place with some good fruit. “You know I remembered the reason why I’m here, before I was knocked out and landed on this beach, I remember a court scene. Heh, yea I was exiled. But you know, that also means you’ve been exiled, and that means you’ve got blood on your hands” As we finish his sentence an arrow shoots, hidden in some bushes and pierces your shoulder, just nearly missing your head. “Tsk, You’re a criminal like me, I can’t trust you” He pulls out his sword and gets ready to fight you." <<endl;
			return response;
		}
		else if (response == 5){
			cout << "All good, I’m gonna go get some fruit in the forest for something to eat, see ya around I guess" <<endl;
			return response;
		}
		else{
			cout << "What do you want to know?" <<endl;
		        cout << "Ask about the area (Enter 1)" <<endl;
		        cout << "Ask how he got here (Enter 2)" <<endl;
		        cout << "Ask if he knows if there is anyone else around (Enter 3)" <<endl;
		        cout << "Ask why is he here on this island (Enter 4)" << endl;
		        cout << "You know all that you need to know, say a farewell and continue along the beach (Enter 5)" << endl;
	
		
		}


	}
}
/*
bool GoblinBattle(Character* player) {
	Goblin* goblinObj = new Goblin();
	double bias = player->getIQ() - goblinObj->getHealth();
	Dice20App* GobDice = new Dice20App(11, 0);
	Dice20App* SpecialDice = new Dice20App(0, 0);
	Dice20App* RunDice = new Dice20App(10, bias);
	bool reaction = false;
	while((player->getHealth() > 0) || goblinObj->getHealth() > 0) {
		cout << "Battle Scene: " << player->getName() << " vs Goblin" << endl;
		cout << "Player health: " << player->getHealth() << endl;
		cout << "Goblin health: " << goblinObj->getHealth() << endl; 
		cout << "Enter one of the numbers displayed below as one of your options: " << endl;
		cout << "Enter 1 to use regular attack" << endl;
		cout << "Enter 2 to use a special attack" << endl;
		cout << "Enter 3 to use a health item" << endl;
		cout << "Enter 4 to run away" << endl;
		int userInput = -1;
		cin >> userInput;
		while ((userInput != 1) && (userInput != 2) && (userInput != 3) && (userInput != 4)) {
			if (userInput == 1) {
				double getDamage = player->attack();
				GobDice->roll();
				if (GobDice->succeed()) {
					goblinObj->deflect_damage(getDamage, player);
					reaction = true;
				}
				else {
					reaction = false;			
					goblinObj->loseHealth(getDamage);
				}
			}
			else if (userInput == 2) {
				 double getDamage = player->specialAttack();
				 SpecialDice->roll();
				if (SpecialDice->succeed()) {
					SpecialDice->setNumberToBeat(SpecialDice->getNumberToBeat()+3);
					GobDice->roll();
					if (GobDice->succeed()) {
						goblinObj->deflect_damage(getDamage, player);
						reaction = true;
					}
					else {
						reaction = false;
						goblinObj->loseHealth(getDamage);
					}
				}
				else {
					cout << "You missed your special attack" << endl;
					reaction = false;
				}
 			}
			else if (userInput == 3) {
				bool checker = player->getHealthItem();
					if (checker) {
						player->increaseHealth(2.0);
					}
					else {
						cout << "You don't have a health item." << endl;
                        cout << "Enter another option: " << endl;
						cout << "Battle Scene: " << player->getName() << " vs Goblin" << endl;
						cout << "Player health: " << player->getHealth() << endl;
						cout << "Goblin health: " << goblinObj->getHealth() << endl;
						cout << "Enter one of the numbers below as one of your options: " << endl;
						cout << "Enter 1 to use regualar attack" << endl;
						cout << "Enter 2 to use a special attack" << endl;
						cout << "Enter 3 to use a health item" << endl;
						cout << "Enter 4 to run away" << endl;
						cin >> userInput;
					}	
			}
			else if (userInput == 4) {
				bias = player->getIQ() - goblinObj->getHealth();	
				RunDice->setBias(bias);
				RunDice->roll();
				if (RunDice->succeed()) {
					cout << "You've successfully run away from battle" << endl;
					return true;
				}
				else {
					cout << "You failed to run away" << endl;
				}	
			}
			else {
				cout << "Error: Invalid input" << endl;
				cout << "Battle Scene: " << player->getName() << " vs Goblin" << endl;
				cout << "Player health: " << player->getHealth() << endl;
				cout << "Goblin health: " << goblinObj->getHealth() << endl;
				cout << "Enter one of the numbers displayed below as one of your options: " << endl;
				cout << "Enter 1 to use regualar attack" << endl;
				cout << "Enter 2 to use a special attack" << endl;
				cout << "Enter 3 to use a health item" << endl;
				cout << "Enter 4 to run away" << endl;
				int userInput = -1;
				cin >> userInput;
			}
		}
		if (!reaction) {
			GobDice->setBias(2);
			GobDice->roll();
			if (GobDice->succeed()) {
				goblinObj->attack_power_indicator(player);
			}
			else {
				cout << "The Goblin missed his attack" << endl;
			}
            GobDice->setBias(0);
		}
	} 
	if (player->getHealth() <= 0) {
		return false;
	}
	else {
		return true;
	}
}

bool ExiledMemberBattle(Character* player) {
    ExiledMember* exiledObj = new ExiledMember();
    double bias = player->getIQ() - exiledObj->getHealth();
    Dice20App* exiledDice = new Dice20App(11, 0);
    Dice20App* SpecialDice = new Dice20App(0, 0);
    Dice20App* RunDice = new Dice20App(10, bias);
    while((player->getHealth() > 0) || exiledObj->getHealth() > 0) {
        cout << "Battle Scene: " << player->getName() << " vs Exiled Member" << endl;
        cout << "Player health: " << player->getHealth() << endl;
        cout << "Exiled Member: " << exiledObj->getHealth() << endl;
        cout << "Enter one of the numbers displayed below as one of your options: " << endl;
        cout << "Enter 1 to use regular attack" << endl;
        cout << "Enter 2 to use a special attack" << endl;
        cout << "Enter 3 to use a health item" << endl;
        cout << "Enter 4 to run away" << endl;
        int userInput = -1;
        cin >> userInput;
        while ((userInput != 1) && (userInput != 2) && (userInput != 3) && (userInput != 4)) {
            if (userInput == 1) {
                double getDamage = player->attack();
                exiledObj->loseHealth(getDamage);
            }
            else if (userInput == 2) {
                 double getDamage = player->specialAttack();
                 SpecialDice->roll();
                 if (SpecialDice->succeed()) {
                     SpecialDice->setNumberToBeat(SpecialDice->getNumberToBeat()+3);
                     exiledObj->loseHealth(getDamage);
                 }
             }
            else if (userInput == 3) {
                bool checker = player->getHealthItem();
                    if (checker) {
                        player->increaseHealth(2.0);
                    }
                    else {
                        cout << "You don't have a health item." << endl;
                        cout << "Enter another option: " << endl;
                        cout << "Battle Scene: " << player->getName() << " vs Exiled Member" << endl;
                        cout << "Player health: " << player->getHealth() << endl;
                        cout << "Exiled Member health: " << exiledObj->getHealth() << endl;
                        cout << "Enter one of the numbers displayed below as one of your options: " << endl;
                        cout << "Enter 1 to use regualar attack" << endl;
                        cout << "Enter 2 to use a special attack" << endl;
                        cout << "Enter 3 to use a health item" << endl;
                        cout << "Enter 4 to run away" << endl;
                        cin >> userInput;
                    }
            }
            else if (userInput == 4) {
                bias = player->getIQ() - exiledObj->getHealth();
                RunDice->setBias(bias);
                RunDice->roll();
		if (RunDice->succeed()) {
			cout << "You've successfully run away from battle" << endl;
			return true;
		}
		else {
			cout << "You failed to run away" << endl;
		} 
            }
            else {
                cout << "Error: Invalid input" << endl;
                cout << "Battle Scene: " << player->getName() << " vs Exiled Member" << endl;
                cout << "Player health: " << player->getHealth() << endl;
                cout << "Exiled Member health: " << exiledObj->getHealth() << endl;
                cout << "Enter one of the numbers displayed below as one of your options: " << endl;
                cout << "Enter 1 to use regualar attack" << endl;
                cout << "Enter 2 to use a special attack" << endl;
                cout << "Enter 3 to use a health item" << endl;
                cout << "Enter 4 to run away" << endl;
                cin >> userInput;
            }
        }
	if (exiledObj->getHealth() <= 12) {
		exiledDice->roll();
		if(exiledDice->succeed()) {
			exiledObj->boost_health();
		}
		else {
			exiledDice->setBias(2);
			exiledDice->roll();
			if (exiledDice->succeed()) {
                exiledObj->special_attack(player);
            }
			else {
                cout << "The Exiled Member missed his attack" << endl;
			} 
                exiledDice->setBias(0);
        }
	}
	else {
            exiledDice->setBias(2);
            exiledDice->roll();
            if (exiledDice->succeed()) {
                exiledObj->special_attack(player);
            }
            else {
                cout << "The Exiled Member missed his attack" << endl;
            }
            exiledDice->setBias(0);
        }
    }
	if (player->getHealth() <= 0) {
		return false;
	}
	else {
		return true;
	}
}

bool BossBattle(Character* player) {
    Boss* bossObj = new Boss();
    double bias = player->getIQ() - bossObj->getHealth();
    Dice20App* bossDice = new Dice20App(11, 0);
    Dice20App* SpecialDice = new Dice20App(0, 0);
    Dice20App* RunDice = new Dice20App(10, bias);
    bool reaction = false;
    while((player->getHealth() > 0) || bossObj->getHealth() > 0) {
        cout << "Battle Scene: " << player->getName() << " vs Boss" << endl;
        cout << "Player health: " << player->getHealth() << endl;
        cout << "Boss health: " << bossObj->getHealth() << endl;
        cout << "Enter one of the numbers displayed below as one of your options: " << endl;
        cout << "Enter 1 to use regular attack" << endl;
        cout << "Enter 2 to use a special attack" << endl;
        cout << "Enter 3 to use a health item" << endl;
        cout << "Enter 4 to run away" << endl;
        int userInput = -1;
        cin >> userInput;
        while ((userInput != 1) && (userInput != 2) && (userInput != 3) && (userInput != 4)) {
            if (userInput == 1) {
                double getDamage = player->attack();
                bossDice->roll();
                if (bossDice->succeed()) {
                    bossObj->reflectDamage(getDamage, player);
                    reaction = true;
                }
                else {
                    reaction = false;
                    bossObj->loseHealth(getDamage);
                }
            }
            else if (userInput == 2) {
                 double getDamage = player->specialAttack();
                 SpecialDice->roll();
                 if (SpecialDice->succeed()) {
                     SpecialDice->setNumberToBeat(SpecialDice->getNumberToBeat()+3);
                     bossDice->roll();
                     if (bossDice->succeed()) {
                         bossObj->reflectDamage(getDamage, player);
                         reaction = true;
                     }
                     else {
                         reaction = false;
                         bossObj->loseHealth(getDamage);
                     }
                 }
                 else {
                     cout << "You missed your special attack" << endl;
                     reaction = false;
                 }
             }
            else if (userInput == 3) {
                bool checker = player->getHealthItem();
                    if (checker) {
                        player->increaseHealth(2.0);
                    }
                    else {
                        cout << "You don't have a health item." << endl;
                        cout << "Enter another option: " << endl;
                        cout << "Battle Scene: " << player->getName() << " vs Boss" << endl;
                        cout << "Player health: " << player->getHealth() << endl;
                        cout << "Boss health: " << bossObj->getHealth() << endl;
                        cout << "Enter one of the numbers displayed below as one of your options: " << endl;
                        cout << "Enter 1 to use regualar attack" << endl;
                        cout << "Enter 2 to use a special attack" << endl;
                        cout << "Enter 3 to use a health item" << endl;
                        cout << "Enter 4 to run away" << endl;
                        cin >> userInput;
                    }
            }
            else if (userInput == 4) {
                bias = player->getIQ() - bossObj->getHealth();
                RunDice->setBias(bias);
                RunDice->roll();
                if (RunDice->succeed()) {
                    cout << "You've successfully run away from battle" << endl;
                    return true;
                }
                else {
                    cout << "You failed to run away" << endl;
                }
            }
            else {
                cout << "Error: Invalid input" << endl;
                cout << "Battle Scene: " << player->getName() << " vs Boss" << endl;
                cout << "Player health: " << player->getHealth() << endl;
                cout << "Boss health: " << bossObj->getHealth() << endl;
                cout << "Enter one of the numbers displayed below as one of your options: " << endl;
                cout << "Enter 1 to use regualar attack" << endl;
                cout << "Enter 2 to use a special attack" << endl;
                cout << "Enter 3 to use a health item" << endl;
                cout << "Enter 4 to run away" << endl;
                cin >> userInput;
            }
        }
        if (!reaction) {
            bossDice->setBias(2);
            bossDice->roll();
            if (bossDice->succeed()) {
                bossObj->attackDamage(player);
            }
            else {
                cout << "The Boss missed his attack" << endl;
            }
            bossDice->setBias(0);
        }
    }
    if (player->getHealth() <= 0) {
        return false;
    }
    else {
        return true;
    }
}
*/

