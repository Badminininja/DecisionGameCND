#ifndef __DICE_20_APP_TEST_HPP
#define __DICE_20_APP_TEST_HPP
#include "gtest/gtest.h"


#include "Dice20App.hpp"

using namespace std;
TEST(Dice20, SimpleCreation) {
	Dice20App* dice = new Dice20App();
	dice->print();
	EXPECT_EQ(dice->getNumberToBeat(), 10);
	EXPECT_EQ(dice->getBias(), 0);
	EXPECT_EQ(dice->getCurrentNumber(), (-1));
}

TEST(Dice20, TestSucceed) {
        Dice20App* dice = new Dice20App(5, 2);
	dice->setCurrentNumber(15);
        dice->print();

        EXPECT_EQ(dice->getNumberToBeat(), 5);
        EXPECT_EQ(dice->getBias(), 2);
        EXPECT_EQ(dice->getCurrentNumber(), 15);
	EXPECT_EQ(dice->succeed(), true);
}

TEST(Dice20, DifferentConstructor) {
        Dice20App* dice = new Dice20App(6,3);
        dice->print();
        EXPECT_EQ(dice->getNumberToBeat(), 6);
        EXPECT_EQ(dice->getBias(), 3);
        EXPECT_EQ(dice->getCurrentNumber(), -1);
	
}

TEST(Dice20, SettingBias) {
        Dice20App* dice = new Dice20App();
	dice->setBias(7);
        dice->print();
        EXPECT_EQ(dice->getNumberToBeat(), 10);
        EXPECT_EQ(dice->getBias(), 7);
        EXPECT_EQ(dice->getCurrentNumber(), (-1));
}

TEST(Dice20, SettingNumberToBeat) {
        Dice20App* dice = new Dice20App();
	dice->setNumberToBeat(2);
        dice->print();
        EXPECT_EQ(dice->getNumberToBeat(), 2);
        EXPECT_EQ(dice->getBias(), 0);
        EXPECT_EQ(dice->getCurrentNumber(), (-1));
}

TEST(Dice20, testingNormalRoll) {
        Dice20App* dice = new Dice20App();
        dice->setNumberToBeat(2);

	dice->print();
	
	dice->SetRollFunction();
	dice->roll();
        dice->print();
        EXPECT_EQ(dice->getNumberToBeat(), 2);
        EXPECT_EQ(dice->getBias(), 0);
        
}
TEST(Dice20, testingDisAdvRoll) {
        Dice20App* dice = new Dice20App();
        dice->setBias(-9);
        dice->SetRollFunction();
	dice->roll();
        EXPECT_EQ(dice->getBias(), (-9));
	EXPECT_NE(dice->getCurrentNumber(), (-1));
}

#endif
