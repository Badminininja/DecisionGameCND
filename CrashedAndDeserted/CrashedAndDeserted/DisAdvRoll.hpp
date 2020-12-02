#ifndef _DISADVANTAGED_ROLL_HPP_
#define _DISADVANTAGED_ROLL_HPP_

#include <iostream>
#include "RollApp.hpp"
#include "RollStrategy.hpp"

using namespace std;


class RollStrategy;
class RollApp;

class DisAdvRoll : public RollStrategy {
	public:
		DisAdvRoll() : RollStrategy() {}
		void rolling(RollApp* RollApp);

};



#endif
