#include "DisAdvRoll.hpp"



void DisAdvRoll :: rolling(RollApp* RollApp){
	
	int temp;
	int lowestNumber = RAND_MAX;
	int bias = RollApp->getBias() * (-1);
	for(unsigned int i = 0; i < bias; i++){
		temp = rand() % RollApp->getNumOfSides() +1;
		if(temp < lowestNumber){
			lowestNumber = temp;
		} 
		
	}
	RollApp->setCurrentNumber(lowestNumber);





}
