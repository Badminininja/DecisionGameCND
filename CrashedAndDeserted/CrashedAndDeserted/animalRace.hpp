//
//  animalRace.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef animalRace_hpp
#define animalRace_hpp

#include "characterRace.hpp"
#include "animalWarrior.hpp"
#include "animalMage.hpp"

class AnimalRace : public CharacterRace {
 public:
    Mage* createMage(std::string name) {AnimalMage* m = new AnimalMage(name, "Animal"); return m;}
    Warrior* createWarrior(std::string name) {AnimalWarrior* w = new AnimalWarrior(name, "Animal");return w;}
};

#endif /* animalRace_hpp */
