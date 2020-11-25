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
	player_health = player_health - attack_type;
	return player_health;
}

void Boss::reflectDamage() {
	new_player_health = attackDamage(player_health, attack_type);
	cout << "Your attack was reflected by the Boss. Your health now is: " << player_health << endl;	
}
