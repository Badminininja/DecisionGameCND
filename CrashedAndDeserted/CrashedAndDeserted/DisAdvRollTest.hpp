#ifndef __DIS_ADV_ROLL_TEST_HPP
#define __DIS_ADV_ROLL_TEST_HPP

#include "gtest/gtest.h"

#include "Dice20App.hpp"

using namespace std;



TEST(DisAdvRoll, SimpleRolling){
	Dice20App* dice = new Dice20App(10,(-10));
	dice->print();
	dice->SetRollFunction();
	dice->roll();
	dice->print();
	EXPECT_NE(dice->getCurrentNumber(), (-1));
}

TEST(DisAdvRoll, SimpleRolling2){
        Dice20App* dice = new Dice20App(10,(-3));
        dice->print();
        dice->SetRollFunction();
        dice->roll();
        dice->print();
        EXPECT_NE(dice->getCurrentNumber(), (-1));
}
TEST(DisAdvRoll, BelowBoundsChecking){
        Dice20App* dice = new Dice20App(10,(-100));
	dice->SetRollFunction();
	dice->roll();
	cout << "lowest: " << dice->getCurrentNumber()<<endl;
	EXPECT_LT(0,dice->getCurrentNumber());

}
TEST(DisAdvRoll, AboveBoundsChecking){

	Dice20App* dice = new Dice20App(10, (-1));
        dice->SetRollFunction();
        dice->roll();
        int highest = 1;
        for(unsigned int i = 0; i < 1000; i++){
                dice->roll();
                if(dice->getCurrentNumber() > highest){
                        highest = dice->getCurrentNumber();
                }
        }
	cout << "highest: " << highest<<endl;
        EXPECT_GT((dice->getNumOfSides()+1), highest);

}

#endif
