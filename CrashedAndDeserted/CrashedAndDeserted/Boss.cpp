#include "Boss.cpp"

using namespace std;

Boss* Boss:boss_instance = 0;

Boss* Boss::get_boss_instance() {
	if (boss_instance == 0) {
		boss_instance = new Boss;
	}
	return boss_instance;
}
double Boss::attackDamage(int player_health, int attack_type) {
	//the attack strength depends both on the character's health and thhe attack type
	attack_factor = (player_health + attack_type) - 5; 
	return attack_factor;
}

void Boss::reflectDamage() {
	//player's health will be modified in a different class
	cout << "Your attack was reflected by the Boss. Your health now is: " << player_health << endl;	
}
