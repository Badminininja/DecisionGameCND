#include "Troll.hpp"


Troll* Troll::troll_instance = 0;

Troll* Troll::get_troll_instance() {
	if (troll_instance == 0) {
		troll_instance = new Troll;
	}
	return troll_intance;
}

double Troll::get_attack_power() {
	return this->attack_power;
}

void Troll::deflect_damage(int player_attack, int player_health) { //perhaps this var can be randomly generated
/*	
int health_increase_factor = player_attack / 2;
	player_health = player_health - 2;
	cout << "Troll deflected your attack. Your health -2" << endl; 
	health_increase(health_increase_factor); */
	cout << "Your attack of " << player_attack <<" on the Troll was deflected." << endl;
	cout << "Your health remains the same: " << player_health << endl;
}

void Troll::health_increase(int player_attack) {
	//the Troll has the ability to boost its health if the player was unable to repeal an attack
	 health_increase_factor = this->health + 2;
	cout << "Troll's health was boosted by " << health_increase_factor << endl;
}
