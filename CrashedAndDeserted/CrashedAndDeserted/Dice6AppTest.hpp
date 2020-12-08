#ifndef __DICE_6_APP_TEST_HPP
#define __DICE_6_APP_TEST_HPP
#include "gtest/gtest.h"


#include "Dice6App.hpp"

using namespace std;
TEST(Dice6, SimpleCreation) {
	Dice6App* dice = new Dice6App();
	dice->print();
	EXPECT_EQ(dice->getNumberToBeat(), 3);
	EXPECT_EQ(dice->getBias(), 0);
	EXPECT_EQ(dice->getCurrentNumber(), 1);
}

TEST(Dice6, DifferentConstructor) {
        Dice6App* dice = new Dice6App(6,3);
        dice->print();
        EXPECT_EQ(dice->getNumberToBeat(), 6);
        EXPECT_EQ(dice->getBias(), 3);
        EXPECT_EQ(dice->getCurrentNumber(), 1);
	
}

TEST(Dice6, SettingBias) {
        Dice6App* dice = new Dice6App();
	dice->setBias(7);
        dice->print();
        EXPECT_EQ(dice->getNumberToBeat(), 3);
        EXPECT_EQ(dice->getBias(), 7);
        EXPECT_EQ(dice->getCurrentNumber(), 1);
}

TEST(Dice6, SettingNumberToBeat) {
        Dice6App* dice = new Dice6App();
	dice->setNumberToBeat(2);
        dice->print();
        EXPECT_EQ(dice->getNumberToBeat(), 2);
        EXPECT_EQ(dice->getBias(), 0);
        EXPECT_EQ(dice->getCurrentNumber(), 1);
}

TEST(Dice6, testingNormalRoll) {
        Dice6App* dice = new Dice6App();
        dice->setNumberToBeat(2);

	dice->print();
	
	dice->SetRollFunction();
	dice->roll();
        dice->print();
        EXPECT_EQ(dice->getNumberToBeat(), 2);
        EXPECT_EQ(dice->getBias(), 0);
        
}
TEST(Dice6, testingDisAdvRoll) {
        Dice6App* dice = new Dice6App();
        dice->setBias(-9);
        dice->print();
        dice->SetRollFunction();
	dice->print();
        dice->roll();
        dice->print();
        EXPECT_EQ(dice->getBias(), (-9));

}

#endif
