#ifndef _ROLL_STRATEGY_HPP_
#define _ROLL_STRATEGY_HPP_

#include "RollApp.hpp"
#include <cmath>
class RollApp;

class RollStrategy {
	public:
	//contructors
	
	RollStrategy(){};

	//pure virtual
	virtual void rolling(RollApp* RollApp) = 0;


};


#endif 
