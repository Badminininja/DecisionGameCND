//
//  animalMage.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef animalMage_hpp
#define animalMage_hpp

#include "mage.hpp"
#include <string>

class AnimalMage : public Mage {
    private:
        std::string name;
        std::string race;
        bool healthItem;
        double IQ;
        double basicAttack;
        double health;
        double spells;
    public:
        AnimalMage(std::string name, std::string race) : name(name), race(race), healthItem(false), IQ(4.5), basicAttack(4.5), health(22.0), spells(5.0) {}
        virtual double attack();
        virtual double specialAttack();
        virtual void healthIncrease();
        virtual void damaged(double damage);
        virtual bool runAway(double chance, double opHealth);
        virtual void setHealthItem(bool val) {this->healthItem = val;}
        virtual std::string getName() {return this->name;}
        virtual bool getHealthItem() {return healthItem;}
        virtual double getHealth() {return this->health;}
        virtual void increaseIQ(double IQ) {this->IQ += IQ;}
        virtual void increaseBasicAttack(double basicAttack) {this->basicAttack += basicAttack;}
        virtual void increaseHealth(double health) {this->health += health;}
        virtual void increaseSpells(double spells) {this->spells += spells;}
        virtual void stats();
};

#endif /* animalMage_hpp */
