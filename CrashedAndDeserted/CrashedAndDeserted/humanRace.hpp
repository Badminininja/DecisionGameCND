//
//  humanRace.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef humanRace_h
#define humanRace_h

#include "characterRace.hpp"
#include "humanWarrior.hpp"
#include "humanMage.hpp"

class HumanRace : public CharacterRace {
 public:
    Mage* createMage(std::string name) {return new HumanMage(std::name, "Human");}
    Warrior* createWarrior(std::string name) {return new HumanWarrior(std::name, "Human");}
};

#endif /* humanRace_h */
