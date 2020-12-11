#include "Boss.hpp"
#include "character.hpp"
//using namespace std;

//Boss* Boss::boss_instance = 0;
 //static Boss bossObj = new Boss();
/*
static Boss Boss :: get_boss_instance() {
	return bossObj;
}*/
Boss* Boss::boss_instance = nullptr;
//Boss :: Boss() {}
double Boss :: attackDamage(Character* player) {
	//std::cout << "The Boss did " << this->damage << " damage" << std::endl;
	player->damaged(this->damage);
	return this->damage;
}

void Boss :: reflectDamage(double playerAttack, Character* player) {
	player->damaged(playerAttack);
	//std::cout << "Your attack was reflected by the Boss. Your health now is: " << player->getHealth()<< std::endl;	
}
void Boss :: loseHealth(double playerAttack) {
	//cout << "The Boss has lost " << playerAttack << " health" << endl;
	//cout << "The Boss has " << this->health - playerAttack << " health" << endl;
	this->health = this->health - playerAttack;
}
double Boss :: getHealth() {
	return this->health;
}
double Boss :: getDamage() {
	return this->damage;
}
