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
    Mage* createMage(std::string name) {HumanMage* m = new HumanMage(name, "Human"); return m;}
    Warrior* createWarrior(std::string name) {HumanWarrior* m = new HumanWarrior(name, "Human"); return m;}
};

#endif /* humanRace_h */
