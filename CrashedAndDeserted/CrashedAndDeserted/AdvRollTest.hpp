#ifndef __ADV_ROLL_TEST_HPP
#define __ADV_ROLL_TEST_HPP

#include "gtest/gtest.h"

#include "Dice20App.hpp"

using namespace std;



TEST(AdvRoll, SimpleRolling){
	srand(time(NULL));
	Dice20App* dice = new Dice20App(10,10);
	dice->print();
	dice->SetRollFunction();
	dice->roll();
	dice->print();
	EXPECT_NE(dice->getCurrentNumber(), (-1));
}

TEST(AdvRoll, SimpleRolling2){
        srand(time(NULL));
	Dice20App* dice = new Dice20App(10,3);
        dice->print();
        dice->SetRollFunction();
        dice->roll();
        dice->print();
        EXPECT_NE(dice->getCurrentNumber(), (-1));
}

TEST(AdvRoll, AboveBoundsChecking){
        srand(time(NULL));
	Dice20App* dice = new Dice20App(10,100);
	dice->SetRollFunction();
	dice->roll();
	cout << "highest: " << dice->getCurrentNumber()<<endl;
	EXPECT_GT((dice->getNumOfSides()+1),dice->getCurrentNumber());

}
TEST(AdvRoll, BelowBoundsChecking){
        srand(time(NULL));
	Dice20App* dice = new Dice20App(10, 1);
        dice->SetRollFunction();
        dice->roll();
        int lowest = RAND_MAX;
        for(unsigned int i = 0; i < 1000; i++){
                dice->roll();
	
                if(dice->getCurrentNumber() < lowest){
                        lowest = dice->getCurrentNumber();
                }
        }
	cout << "lowest: " << lowest<<endl;
        EXPECT_LT(0, lowest);



}
#endif
