//
//  animalWarriorTest.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 12/10/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef animalWarriorTest_h
#define animalWarriorTest_h

#include "gtest/gtest.h"
#include "characterRace.hpp"
#include "animalRace.hpp"
#include "animalWarrior.hpp"
#include "animalMage.hpp"

using namespace std;

TEST(animalWarriorTest, attackTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_DOUBLE_EQ(player->attack(), 5.5);
    player->increaseBasicAttack(3.0);
    EXPECT_DOUBLE_EQ(player->attack(), 8.5);
}

TEST(animalWarriorTest, specialAttackTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_DOUBLE_EQ(player->specialAttack(), 7.0);
    player->increaseSmite(3.0);
    EXPECT_DOUBLE_EQ(player->specialAttack(), 10.0);
}

TEST(animalWarriorTest, IQTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_DOUBLE_EQ(player->getIQ(), 4.0);
    player->increaseIQ(3.0);
    EXPECT_DOUBLE_EQ(player->getIQ(), 7.0);
}

TEST(animalWarriorTest, healthTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_DOUBLE_EQ(player->getHealth(), 18.0);
    player->increaseHealth(3.0);
    EXPECT_DOUBLE_EQ(player->getHealth(), 21.0);
    player->healthIncrease();
    EXPECT_DOUBLE_EQ(player->getHealth(), 23.5);
}

TEST(animalWarriorTest, nameTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_EQ(player->getName(), "aro");
}

TEST(animalWarriorTest, itemHealthTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_EQ(player->getHealthItem(), false);
    player->setHealthItem(true);
    EXPECT_EQ(player->getHealthItem(), true);
}

TEST(animalWarriorTest, damageTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createWarrior("aro");
    double damage = 5.0;
    player->damaged(damage);
    EXPECT_DOUBLE_EQ(player->getHealth(), 13.0);
}

#endif /* animalWarriorTest_h */
