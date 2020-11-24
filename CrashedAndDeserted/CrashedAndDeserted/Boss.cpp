#include "Boss.cpp"

using namespace std;

Boss* Boss:boss_instance = 0;

Boss* Boss::get_boss_instance() {
	if (boss_instance == 0) {
		boss_instance = new Boss;
	}
	return boss;
}
double Boss::attackDamage(int player_health) {
	int damage_on_player = player_helath - 10;
	player_health = player_health - damage_on_player;
	cout << "You got attacked by the Boss. Your health now is: " << player_health << endl;
}

int reflectDamage() {
	cout << "The Boss reflected your strike." << endl;
	this->health = this->health + 10;
	cout << "The Boss' health now is: " << this->health;	
}
