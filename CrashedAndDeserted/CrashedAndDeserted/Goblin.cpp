#include "Goblin.hpp"


Goblin* Goblin::goblin_instance = 0;

Goblin* Goblin::get_goblin_instance() {
	if (goblin_instance == 0) {
		goblin_instance = new Goblin;
	}
	return goblin_instance;
}

void Goblin::attack_power_indicator(Character* player) {
	cout << "The Troll did " << this->attack_power << "amount of damage" << endl;
	player->damaged(this->attack_power);
}

void Goblin::deflect_damage(double player_attack, Character* player) { 
	cout << "Your attack of " << player_attack << " on the Troll was deflected." << endl;
	cout << "Your health remains the same: " << player->getHealth() << endl;
	cout << "Trolls' health remains the same: " << this->health <<  endl;
}
/*
void Goblin::health_increase() {
	//the Troll has the ability to boost its health if the player was unable to repeal an attack
	 double health_increase_factor = this->health + 2;
	this->health = health_increase_factor;
	cout << "Troll's health was boosted by 2" << endl;
	cout << "The Troll's health is now: " << this->health << endl;
}*/
void Goblin::loseHealth(double playerAttack) {
	cout << "The Troll has lost " << playerAttack << " health." << endl;
	this->health = this->health - playerAttack;
	cout << "The Troll has " << this->health << endl;
}
int Goblin::getHealth() {
	return this->health;
}
int Goblin::getSpecialAttack() {
	return this->attack_power;	
}
