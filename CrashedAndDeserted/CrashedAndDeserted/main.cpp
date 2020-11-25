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

using namespace std;

void openingScene(CharacterRace* typeCharacter, Warrior* userWarrior, Mage* userMage);
int firstScene(Warrior* userWarrior, Mage* userMage, vector<string> progress);

int main() {
    CharacterRace* typeCharacter;
    Warrior* userWarrior;
    Mage* userMage;
    int sceneNum;
    vector<string> progress;
    //Will have to make a Character class that inherits the Mage and Warrior classes
    openingScene(typeCharacter, userWarrior, userMage);
    sceneNum = firstScene(userWarrior, userMage, progress);
    return 0;
}

void openingScene(CharacterRace* typeCharacter, Warrior* userWarrior, Mage* userMage) {
    string name;
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
            userWarrior = typeCharacter->createWarrior(name);
        } else if (response == 2) {
            userMage = typeCharacter->createMage(name);
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
}

int firstScene(Warrior* userWarrior, Mage* userMage, vector<string> progress) {
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
            userMage->stats();
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
