#include "Boss.hpp"

using namespace std;

Boss* Boss::boss_instance = 0;

Boss* Boss::get_boss_instance() {
	if (boss_instance == 0) {
		boss_instance = new Boss;
	}
	return boss_instance;
}
double Boss::attackDamage(Character* player) {
	cout << "The Boss did " << this->damage << " damage" << endl;
	player->getDamage(this->damage);
	return this->damage;
}

void Boss::reflectDamage(double playerAttack, Character* player) {
	//change to include parameters and add a return type
	//player's health will be modified in a different class
	player->damaged(playerAttack);
	cout << "Your attack was reflected by the Boss. Your health now is: " << player->getHealth()<< endl;	
}
void Boss::loseHealth(double playerAttack) {
	cout << "The Boss has lost " << playerAttack << " health" << endl;
	cout << "The Boss has " << this->health - playerAttack << " health" << endl;
	this->health = this->health - playerAttack;
}
int Boss::getHealth() {
	return this->health;
}
int Boss::getDamage() {
	return this->damage();
}
