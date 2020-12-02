#ifndef _DICE_6_APP_HPP_
#define _DICE_6_APP_HPP_

#include <iostream>
#include <cmath>
#include "RollApp.hpp"
#include "RollStrategy.hpp"
using namespace std;


class Dice6App : public RollApp {
	private:
		int sides = 6;
		int currentNumber = 1;
		int numberToBeat = sides/2;
		int bias = 0;
	public:
		Dice6App();
		Dice6App(RollStrategy* function) : RollApp(RollFunction){}
		void print();
		void roll();	
		int  getNumOfSides();
		void setCurrentNumber(int);
		int  getNumberToBeat();
		int  getBias();




};




#endif


