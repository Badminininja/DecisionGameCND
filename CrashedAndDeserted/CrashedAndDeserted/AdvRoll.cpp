#include "AdvRoll.hpp"


void AdvRoll :: rolling(RollApp* RollApp) {
	//srand(time(NULL));
	int temp;
	int highestNumber = (-1);
	for(unsigned int i = 0; i < RollApp->getBias(); i++){
		temp = rand() % RollApp->getNumOfSides() +1;
		if(temp > highestNumber){
			highestNumber = temp;
		} 
	}
	
	RollApp->setCurrentNumber(highestNumber);



}
