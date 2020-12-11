#include "ExiledMember.hpp"

using namespace std;

ExiledMember* ExiledMember :: exiled_instance = 0;

ExiledMember* ExiledMember :: get_exiled_instance() {
	if (exiled_instance == 0) {
		exiled_instance = new ExiledMember;
	}
	return exiled_instance;
}
void ExiledMember :: loseHealth(double playerAttack) {
	cout << "The Exiled Member has lost " << playerAttack << " health" << endl;
	cout << "The Exiled Member has " << this->health - playerAttack << " health" << endl;
	this->health = this->health - playerAttack;
}
double ExiledMember ::  special_attack(Character* player) {
	cout << "The Exiled Member did " << this->damage << " damage" << endl;
	player->damaged(this->damage);
	return this->damage;
}
double ExiledMember :: getDamage() {
	return this->damage;
}
double ExiledMember :: getHealth(){
	return this->health;
}
void ExiledMember :: boost_health() {
	this->health = this->health + 2;
	cout << "Exiled Member health was boosted by 2" << endl;
	cout << "Exiled Member's health now: " << this->health << endl;
}
