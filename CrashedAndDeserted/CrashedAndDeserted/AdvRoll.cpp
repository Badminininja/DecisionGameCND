#include "AdvRoll.hpp"


void AdvRoll :: RollStrategy(RollApp* RollApp) {
	int RolledNumber1 = rand() % RollApp->getNumOfSides() +1;
	int RolledNumber2 = rand() % RollApp->getNumOfSides() +1;
	int highestNumber = RolledNumber1;
	if (RolledNumber1 < RolledNumber2)
		highestNumber = RolledNumber2;
	RollApp->setCurrentNumber(highestNumber);



}
