#include "ExiledMember.hpp"

using namespace std;

ExiledMember* ExiledMember::exiled_instance = 0;

ExiledMember* ExiledMember::get_exiled_instance() {
	if (exiled_instance == 0) {
		exiled_instance = new Exiledmember;
	}
	return exiled_instance;
}
void ExiledMember::loseHealth(double player Attack) {
	cout << "The Exiled Member has lost " << playerAttack << " health" << endl;
	cout << "The Exiled Member has " << this->health - playerAttack << " health" << endl;
	this->health = this->health - playerAttack;
}
double ExiledMember::special_attack(Character* player) {
	cout << "The Exiled Member did " << this->damage << " damage" << endl;
	player->getDamage(this->damage);
	return this->damage;
}
int getDamage() {
	return this->damage;
}
int getHealth(){
	return this->health;
}
