#ifndef _ROLL_APP_HPP_
#define _ROLL_APP_HPP_

#include "RollStrategy.hpp"
#include "DisAdvRoll.hpp"
#include "NormalRoll.hpp"
#include "AdvRoll.hpp"
class RollStratey;

class RollApp {
	protected:
		RollStrategy* RollFunction;	

	public:
		RollApp() : RollFunction(nullptr) {};
		RollApp(RollStrategy* function) : RollFunction(function){};
		
		virtual void SetRollFunction() = 0;
		virtual void print() = 0;
		virtual void roll() = 0;
		virtual int getNumOfSides() =0;
		virtual void setCurrentNumber(int) = 0;
		virtual int getNumberToBeat() = 0;
		virtual int getBias() = 0;
};

#endif
