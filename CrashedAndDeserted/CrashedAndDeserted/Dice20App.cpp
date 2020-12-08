#include "Dice20App.hpp"


Dice20App :: Dice20App() : RollApp(){}

Dice20App :: Dice20App(int Beat, int BIAS){
	numberToBeat = Beat;
	bias = BIAS;

}

void Dice20App :: print(){

	cout << "Rolled a 6 sided dice with a bias of: "<< bias << endl << "Number to win is " << numberToBeat<< endl << "you got: " << currentNumber <<endl;	
}

void Dice20App :: SetRollFunction(){
	
	RollStrategy* function;
	cout << "after initialization of RollStrat: Bias = " << bias <<endl;
	if(bias == 0){
		function = new NormalRoll();
	}
	if(bias < 0){
		function = new DisAdvRoll();
	}
	else{
		function = new AdvRoll();
	}
	cout << "after the if tree: Bias = "<<bias<<endl;
	RollFunction = function;
}



void Dice20App :: roll(){
	if(!RollFunction){
		throw invalid_argument("NULL");
	}
	RollFunction->rolling(this);
}

int Dice20App :: getCurrentNumber(){
	return currentNumber;

}

int Dice20App :: getNumOfSides(){
	return sides;
}

void Dice20App :: setCurrentNumber(int RolledNumber){
	currentNumber = RolledNumber;
}

int Dice20App :: getNumberToBeat() {
	return numberToBeat;

}

int Dice20App :: getBias() {
	return bias;

}

void Dice20App :: setNumberToBeat(int BEAT) {
	numberToBeat = BEAT;

}

void Dice20App :: setBias(int BIAS) {
	bias = BIAS;

}
