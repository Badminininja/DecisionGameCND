//
//  humanMageTest.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 12/10/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef humanMageTest_h
#define humanMageTest_h

#include "gtest/gtest.h"
#include "characterRace.hpp"
#include "humanRace.hpp"
#include "humanWarrior.hpp"
#include "humanMage.hpp"

using namespace std;

TEST(humanMageTest, attackTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createMage("aro");
    EXPECT_DOUBLE_EQ(player->attack(), 4.0);
    player->increaseBasicAttack(3.0);
    EXPECT_DOUBLE_EQ(player->attack(), 7.0);
}

TEST(humanMageTest, specialAttackTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createMage("aro");
    EXPECT_DOUBLE_EQ(player->specialAttack(), 6.5);
    player->increaseSpells(3.0);
    EXPECT_DOUBLE_EQ(player->specialAttack(), 9.5);
}

TEST(humanMageTest, IQTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createMage("aro");
    EXPECT_DOUBLE_EQ(player->getIQ(), 6.0);
    player->increaseIQ(3.0);
    EXPECT_DOUBLE_EQ(player->getIQ(), 9.0);
}

TEST(humanMageTest, healthTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createMage("aro");
    EXPECT_DOUBLE_EQ(player->getHealth(), 20.0);
    player->increaseHealth(3.0);
    EXPECT_DOUBLE_EQ(player->getHealth(), 23.0);
    player->healthIncrease();
    EXPECT_DOUBLE_EQ(player->getHealth(), 26.0);
}

TEST(humanMageTest, nameTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createMage("aro");
    EXPECT_EQ(player->getName(), "aro");
}

TEST(humanMageTest, itemHealthTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createMage("aro");
    EXPECT_EQ(player->getHealthItem(), false);
    player->setHealthItem(true);
    EXPECT_EQ(player->getHealthItem(), true);
}

TEST(humanMageTest, damageTest) {
    CharacterRace* playerType = new HumanRace();
    Character* player = playerType->createMage("aro");
    double damage = 5.0;
    player->damaged(damage);
    EXPECT_DOUBLE_EQ(player->getHealth(), 15.0);
}

#endif /* humanMageTest_h */
