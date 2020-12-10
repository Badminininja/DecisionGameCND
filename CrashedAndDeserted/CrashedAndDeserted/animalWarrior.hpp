//
//  animalWarrior.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef animalWarrior_hpp
#define animalWarrior_hpp

#include "warrior.hpp"
#include <string>

class AnimalWarrior : public Warrior {
    private:
        std::string name;
        std::string race;
        bool healthItem;
        double IQ;
        double basicAttack;
        double health;
        double smite;
    public:
        AnimalWarrior(std::string name, std::string race) : name(name), race(race), healthItem(false), IQ(4.0), basicAttack(5.5), health(18.0), smite(7.0) {}
        virtual double attack();
        virtual double specialAttack();
        virtual void healthIncrease();
        virtual void damaged(double damage);
        virtual bool runAway(double chance, double opHealth);
        virtual std::string getName() {return this->name;}
        virtual void setHealthItem(bool val) {this->healthItem = val;}
        virtual bool getHealthItem() {return healthItem;}
        virtual void increaseIQ(double IQ) {this->IQ += IQ;}
        virtual double getHealth() {return this->health;}
        virtual void increaseBasicAttack(double basicAttack) {this->basicAttack += basicAttack;}
        virtual void increaseHealth(double health) {this->health += health;}
        virtual void increaseSpells(double smite) {this->smite += smite;}
        virtual void stats();
};

#endif /* animalWarrior_hpp */
