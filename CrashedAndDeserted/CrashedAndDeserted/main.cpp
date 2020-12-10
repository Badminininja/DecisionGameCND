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
#include "ExiledMember.hpp"
#include "Boss.hpp"
#include "Goblin.hpp"
#include "Dice20App.hpp"

using namespace std;

Character* openingScene(CharacterRace* typeCharacter, Character* userCharacter);
int firstScene(Character* userCharacter, vector<string> progress);
bool GoblinBattle(Character* player);
bool ExiledMemberBattle(Character* player);
bool BossBattle(Character* player);

int main() {
    CharacterRace* typeCharacter;
    Character* userCharacter;
    int sceneNum;
    vector<string> progress;
    //Will have to make a Character class that inherits the Mage and Warrior classes
    userCharacter = openingScene(typeCharacter,userCharacter);
    sceneNum = firstScene(userCharacter, progress);
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


