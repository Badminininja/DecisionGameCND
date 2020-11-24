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
	int health_increase_factor = player_attack / 2;
	player_health = player_health - 2;
	cout << "Troll deflected your attack. Your health -2" << endl; 
	health_increase(health_increase_factor);
}

void Troll::health_increase(int health_increase_factor) {
	this->health = this->health + health_increase_factor;
	cout << "Troll's health was boosted by " << health_increase_factor << endl;
}
