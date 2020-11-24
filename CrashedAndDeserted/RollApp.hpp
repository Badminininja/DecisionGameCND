#ifndef _ROLL_APP_HPP_
#define _ROLL_APP_HPP_

#include "RollStrategy.hpp"

class RollStratey;

class RollApp {
	protected:
		RollStrategy* RollFunction;	

	public:
		RollApp() : RollFunction(nullptr) {};
		RollApp(RollStrategy* function) : RollFunction(function){};
		
		void SetSortFunction(RollStrategy* RollFunction){
			this->RollFunction = RollFunction;};
		virtual void print() = 0;
		virtual void roll() = 0;
		virtual int numOfSides() =0;
		virtual int currentNumber() = 0;
		virtual int numberToBeat() = 0;
		virtual int bias() = 0;
};

#endif
