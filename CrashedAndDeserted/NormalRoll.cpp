#include "NormalRoll.hpp"



void NormalRoll :: RollStrategy(RollApp* RollApp){	
	int RolledNumber = rand() % RollApp->getNumOfSides() + 1;		
	RollApp->setCurrentNumber(RolledNumber);	


}
