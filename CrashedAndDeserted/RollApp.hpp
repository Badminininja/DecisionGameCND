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
		virtual int getNumOfSides() =0;
		virtual int getCurrentNumber() = 0;
		virtual int getNumberToBeat() = 0;
		virtual int getBias() = 0;
};

#endif
