#ifndef _DICE_20_APP_HPP_
#define _DICE_20_APP_HPP_

#include <iostream>
#include <cmath>
#include "RollApp.hpp"
#include "RollStrategy.hpp"


using namespace std;


class Dice20App : public RollApp {
	private:
		int sides = 20;
		int currentNumber = (-1);
		int numberToBeat = sides/2;
		int bias = 0;
	public:
		Dice20App();//basic constructor
		Dice20App(int BEAT, int BIAS);
		Dice20App(RollStrategy* function) : RollApp(RollFunction){}
		void SetRollFunction();
		void print();
		void roll();	
		int  getNumOfSides();
		int  getCurrentNumber();	
		int  getNumberToBeat();
		int  getBias();
		bool succeed();

		void setCurrentNumber(int);
		void setNumberToBeat(int);
		void setBias(int);



};




#endif


