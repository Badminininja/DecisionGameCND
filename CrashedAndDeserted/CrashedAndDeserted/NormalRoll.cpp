#include "NormalRoll.hpp"



void NormalRoll :: rolling(RollApp* RollApp){	
	cout << "got into normal roll"<<endl;
	int RolledNumber = rand() % RollApp->getNumOfSides() + 1;		
	RollApp->setCurrentNumber(RolledNumber);	


}
