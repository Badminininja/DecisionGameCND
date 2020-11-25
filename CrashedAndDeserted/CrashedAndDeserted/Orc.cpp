#include "Orc.hpp"

Orc* Orc::orc_instance = 0;

Orc* Orc::get_orc_instance() {
	if (orc_instance == 0) {
		orc_instance = new Orc;
	}
	return orc_instance;
}

void Orc::special_attack() {
	attack_strength = this->orc_health - 5;
	cout << "The Orc's attack strngth is: " << attack_strength << endl;                                            
}

void Orc::boost_health() {
	this->orc_health = this->orc_health + 5;
	cout << "Orc's health is now: " << this->health << endl;
}
