#include "NormalRoll.hpp"



void NormalRoll :: rolling(RollApp* RollApp){	
	
	int RolledNumber = rand() % RollApp->getNumOfSides() + 1;		
	RollApp->setCurrentNumber(RolledNumber);	


}
