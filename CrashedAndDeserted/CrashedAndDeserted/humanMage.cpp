//
//  humanMage.cpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#include "humanMage.hpp"
#include <iostream>

int HumanMage::attack() {
    std::cout << this->name << " used a basic attack and did " << this->basicAttack << " damage." << std::endl;
    return this->basicAttack;
}

int HumanMage::specialAttack() {
    std::cout << this->name << " used a spell attack and did " << this->spells << " damage." << std::endl;
    return this->spells;
}

void HumanMage::healthIncrease() {
    std::cout << this->name << " healed and gained 3 health." << std::endl;
    this->health += 3.0;
}

void HumanMage::damaged(double damage) {
    std::cout << this->name << " was attacked and lost " << damage << " health." << std::endl;
    this->health -= damage;
}

bool HumanMage::runAway(double chance, double opHealth) {
    double run = chance * IQ;
    if (run > opHealth) {
        std::cout << this->name << " has successfully escaped the battle." << std::endl;
        return true;
    } else {
        std::cout << this->name << " could not escape the battle." << std::endl;
        return false;
    }
}

void HumanMage::stats() {
    std::cout << "STATS:" << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Race: " << this->race << std::endl;
    std::cout << "Basic Attack: " << this->basicAttack << std::endl;
    std::cout << "Spell: " << this->spells << std::endl;
    std::cout << "Health: " << this->health << std::endl;
    std::cout << "IQ: " << this->IQ << std::endl;
}
