#ifndef _ADVANTAGED_ROLL_HPP_
#define _ADVANTAGED_ROLL_HPP_

#include <iostream>
#include "RollApp.hpp"
#include "RollStrategy.hpp"

using namespace std;


class RollStrategy;
class RollApp;

class AdvRoll : public RollStrategy {
	public:
		AdvRoll() : RollStrategy() {}
		void RollStrategy(RollApp* RollApp);

};



#endif
