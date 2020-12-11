//
//  animalMageTest.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 12/10/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef animalMageTest_h
#define animalMageTest_h

#include "gtest/gtest.h"
#include "characterRace.hpp"
#include "animalRace.hpp"

using namespace std;

TEST(animalMageTest, attackTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createMage("aro");
    EXPECT_DOUBLE_EQ(player->attack(), 4.5);
    player->increaseBasicAttack(3.0);
    EXPECT_DOUBLE_EQ(player->attack(), 7.5);
}

TEST(animalMageTest, specialAttackTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createMage("aro");
    EXPECT_DOUBLE_EQ(player->specialAttack(), 5.0);
    player->increaseSpells(3.0);
    EXPECT_DOUBLE_EQ(player->specialAttack(), 8.0);
}

TEST(animalMageTest, IQTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createMage("aro");
    EXPECT_DOUBLE_EQ(player->getIQ(), 4.5);
    player->increaseIQ(3.0);
    EXPECT_DOUBLE_EQ(player->getIQ(), 7.5);
}

TEST(animalMageTest, healthTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createMage("aro");
    EXPECT_DOUBLE_EQ(player->getHealth(), 22.0);
    player->increaseHealth(3.0);
    EXPECT_DOUBLE_EQ(player->getHealth(), 25.5);
    player->healthIncrease();
    EXPECT_DOUBLE_EQ(player->getHealth(), 29.0);
}

TEST(animalMageTest, nameTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createMage("aro");
    EXPECT_EQ(player->getName(), "aro");
}

TEST(animalMageTest, itemHealthTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createMage("aro");
    EXPECT_EQ(player->getHealthItem(), false);
    player->setHealthItem(true);
    EXPECT_EQ(player->getHealthItem(), true);
}

TEST(animalMageTest, healthTest) {
    CharacterRace* playerType = new AnimalRace();
    Character* player = playerType->createMage("aro");
    double damage = 5.0;
    player->damaged(damage);
    EXPECT_DOUBLE_EQ(player->getHealth(), 17.0);
}

#endif /* animalMageTest_h */
