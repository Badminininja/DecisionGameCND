#include "Orc.hpp"

Orc* Orc::orc_instance = 0;

Orc* Orc::get_orc_instance() {
	if (orc_instance == 0) {
		orc_instance = new Orc;
	}
	return orc_instance;
}

void Orc::special_attack(int player_health) {
	player_health = player_health - 5;
	//call a setter function that will change the player's health.
	cout << "Your health is now: " << player_health << endl;                                            
}

void Orc::boost_health() {
	this->orc_health = this->orc_health + 5;
	cout << "Orc's health is now: " << this->health << endl;
}
