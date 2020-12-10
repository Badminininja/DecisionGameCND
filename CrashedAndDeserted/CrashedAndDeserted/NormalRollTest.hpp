#ifndef __NORMAL_ROLL_TEST_HPP
#define __NORMAL_ROLL_TEST_HPP
#include "gtest/gtest.h"


#include "Dice20App.hpp"
using namespace std;


TEST(NormalRoll, SimpleRolling){
	Dice20App* dice = new Dice20App();
	dice->print();
	dice->SetRollFunction();
	dice->roll();
	dice->print();
	EXPECT_NE(dice->getCurrentNumber(), (-1));
}
TEST(NormalRoll, SimpleRolling2){
        Dice20App* dice = new Dice20App();
        dice->print();
        dice->SetRollFunction();
        dice->roll();
        dice->print();
        EXPECT_NE(dice->getCurrentNumber(), (-1));
}

TEST(NormalRoll, AboveBoundsChecking){
	Dice20App* dice = new Dice20App();
	dice->SetRollFunction();
	dice->roll();
	int highest = dice->getCurrentNumber();
	for(unsigned int i = 0; i < 100; i++){
		dice->roll();
		if(dice->getCurrentNumber() > highest){
			highest = dice->getCurrentNumber();
		}
	}
	EXPECT_GT((dice->getNumOfSides()+1), highest);



}
TEST(NormalRoll, BelowBoundsChecking){
        Dice20App* dice = new Dice20App();
        dice->SetRollFunction();
        dice->roll();
        int lowest = dice->getCurrentNumber();
        for(unsigned int i = 0; i < 100; i++){
                dice->roll();
                if(dice->getCurrentNumber() < lowest){
                        lowest = dice->getCurrentNumber();
                }
        }
        EXPECT_LT(0, lowest);



}

#endif
