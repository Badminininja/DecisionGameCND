#include "Dice6App.hpp"


Dice6App::Dice6App() : RollApp(){}

void Dice6App :: print(){
	cout << "Rolled a 6 sided dice /n Number to win is " << numberToBeat<< endl << "you got: " << currentNumber <<endl;	
}

void Dice6App :: roll(){
	if(!function){
		throw invalid_argument("NULL");
	}
	function->sort(this);
}

int Dice6App :: getNumOfSides(){
	return numOfSides;
}

void Dice6App :: setCurrentNumber(int RolledNumber){
	currentNumber = RolledNumber;
}

int Dice6App :: getNumberToBeat() {
	return numberToBest;

}

int Dice6App :: getBias() {
	return bias;

}

