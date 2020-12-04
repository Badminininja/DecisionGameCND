#include "DisAdvRoll.hpp"



void DisAdvRoll :: rolling(RollApp* RollApp){
	int RolledNumber1 = rand() % RollApp->getNumOfSides() +1;
	int RolledNumber2 = rand() % RollApp->getNumOfSides() +1;
	int lowestNumber = RolledNumber1;
	if (RolledNumber1 > RolledNumber2)
		lowestNumber = RolledNumber2;
	RollApp->setCurrentNumber(lowestNumber);





}
