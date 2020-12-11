//
//  humanMage.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef humanMage_hpp
#define humanMage_hpp

#include "mage.hpp"
#include <string>

class HumanMage : public Mage {
    private:
        std::string name;
        std::string race;
        bool healthItem;
        double IQ;
        double basicAttack;
        double health;
        double spells;
    public:
        HumanMage(std::string name, std::string race) : name(name), race(race), healthItem(false), IQ(6.0), basicAttack(4.0), health(35.0), spells(6.5) {}
        virtual double attack();
        virtual double specialAttack();
        virtual void healthIncrease();
        virtual void damaged(double damage);
        virtual double getIQ() {return this->IQ;}
        virtual std::string getName() {return this->name;}
        virtual void setHealthItem(bool val) {this->healthItem = val;}
        virtual bool getHealthItem() {return healthItem;}
        virtual void increaseIQ(double IQ) {this->IQ += IQ;}
        virtual double getHealth() {return this->health;}
        virtual void increaseBasicAttack(double basicAttack) {this->basicAttack += basicAttack;}
        virtual void increaseHealth(double health) {this->health += health;}
        virtual void increaseSpells(double spells) {this->spells += spells;}
        virtual void stats();
};

#endif /* humanMage_hpp */
