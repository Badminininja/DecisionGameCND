//
//  characterRace.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef characterRace_hpp
#define characterRace_hpp

#include "warrior.hpp"
#include "mage.hpp"

class CharacterRace {
    public:
        virtual Mage* createMage(std::string name) = 0;
        virtual Warrior* createWarrior(std::string name) = 0;
};

#endif /* characterRace_h */
