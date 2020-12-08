//
//  character.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 12/5/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef character_h
#define character_h

#include <string>

class Character {
    private:
        std::string name;
        std::string race;
        bool healthItem;
        double IQ;
        double basicAttack;
        double health;
    public:
        virtual double attack() = 0;
        virtual double specialAttack() = 0;
        virtual void healthIncrease() = 0;
        virtual void damaged(double damage) = 0;
        virtual bool runAway(double chance, double opHealth) = 0;
        virtual std::string getName() {return this->name;}
        virtual double getHealth() {return this->health;}
        virtual void setHealthItem(bool val) {this->healthItem = val;}
        virtual bool getHealthItem() {return healthItem;}
        virtual void increaseIQ(double IQ) {this->IQ += IQ;}
        virtual void increaseBasicAttack(double basicAttack) {this->basicAttack += basicAttack;}
        virtual void increaseHealth(double health) {this->health += health;}
        virtual void stats() = 0;
};

#endif /* character_h */
