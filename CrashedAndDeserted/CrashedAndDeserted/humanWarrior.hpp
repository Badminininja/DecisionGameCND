//
//  humanWarrior.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef humanWarrior_hpp
#define humanWarrior_hpp

#include "warrior.hpp"
#include <string>

class HumanWarrior : public Warrior {
    private:
        std::string name;
        std::string race;
        bool healthItem;
        double IQ;
        double basicAttack;
        double health;
        double smite;
    public:
        HumanWarrior(std::string name, std::string race) : name(name), race(race), healthItem(false), IQ(3.5), basicAttack(4.5), health(16.5), smite(8.0) {}
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
        virtual void increaseSmite(double smite) {this->smite += smite;}
        virtual void stats();
};

#endif /* humanWarrior_hpp */
