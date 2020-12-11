//
//  humanWarriorTest.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 12/10/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef humanWarriorTest_h
#define humanWarriorTest_h

#include "gtest/gtest.h"
#include "characterRace.hpp"
#include "humanRace.hpp"
#include "humanWarrior.hpp"
#include "humanMage.hpp"

using namespace std;

TEST(humanWarriorTest, attackTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_DOUBLE_EQ(player->attack(), 4.5);
    player->increaseBasicAttack(3.0);
    EXPECT_DOUBLE_EQ(player->attack(), 7.5);
}

TEST(humanWarriorTest, specialAttackTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_DOUBLE_EQ(player->specialAttack(), 8.0);
    player->increaseSmite(3.0);
    EXPECT_DOUBLE_EQ(player->specialAttack(), 11.0);
}

TEST(humanWarriorTest, IQTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_DOUBLE_EQ(player->getIQ(), 3.5);
    player->increaseIQ(3.0);
    EXPECT_DOUBLE_EQ(player->getIQ(), 6.5);
}

TEST(humanWarriorTest, healthTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_DOUBLE_EQ(player->getHealth(), 29.5);
    player->increaseHealth(3.0);
    EXPECT_DOUBLE_EQ(player->getHealth(), 32.5);
    player->healthIncrease();
    EXPECT_DOUBLE_EQ(player->getHealth(), 34.5);
}

TEST(humanWarriorTest, nameTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_EQ(player->getName(), "aro");
}

TEST(humanWarriorTest, itemHealthTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createWarrior("aro");
    EXPECT_EQ(player->getHealthItem(), false);
    player->setHealthItem(true);
    EXPECT_EQ(player->getHealthItem(), true);
}

TEST(humanWarriorTest, damageTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createWarrior("aro");
    double damage = 5.0;
    player->damaged(damage);
    EXPECT_DOUBLE_EQ(player->getHealth(), 24.5);
}


#endif /* humanWarriorTest_h */
