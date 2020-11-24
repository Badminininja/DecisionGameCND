#ifndef _NORMAL_ROLL_HPP_
#define _NORMAL_ROLL_HPP_

#include <iostream>
#include "RollApp.hpp"
#include "RollStrategy.hpp"

using namespace std;


class RollStrategy;
class RollApp;

class NormalRoll : public RollStrategy {
	public:
		NormalRoll() : RollStrategy() {}
		void RollStrategy(RollApp* RollApp);

};



#endif
