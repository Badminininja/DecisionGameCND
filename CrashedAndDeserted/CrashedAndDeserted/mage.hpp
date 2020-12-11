//
//  mage.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef mage_h
#define mage_h

#include <string>
#include "character.hpp"

class Mage : public Character{
    private:
        std::string name;
        std::string race;
        bool healthItem;
        double IQ;
        double basicAttack;
        double health;
        double spells;
    public:
        virtual double attack() = 0;
        virtual double specialAttack() = 0;
        virtual void healthIncrease() = 0;
        virtual void damaged(double damage) = 0;
        virtual double getIQ() {return this->IQ;}
        virtual std::string getName() {return this->name;}
        virtual void setHealthItem(bool val) {this->healthItem = val;}
        virtual bool getHealthItem() {return healthItem;}
        virtual double getHealth() {return this->health;}
        virtual void increaseIQ(double IQ) {this->IQ += IQ;}
        virtual void increaseBasicAttack(double basicAttack) {this->basicAttack += basicAttack;}
        virtual void increaseHealth(double health) {this->health += health;}
        virtual void increaseSpells(double spells) {this->spells += spells;}
        virtual void stats() = 0;
};

#endif /* mage_h */
