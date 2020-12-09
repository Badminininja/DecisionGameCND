#ifndef CLASS_GOBLIN
#define CLASS_GOBLIN
#include <iostream>
#include "character.hpp"
using namespace std;

class Goblin {
	private:
		static Goblin* goblin_instance;
		double attack_power = 4;
		double health = 20;
	protected:
		Goblin(); 
	public:
		static Goblin* get_troll_instance();
		double attack_power_indicator(Character*);
		void deflect_damage(double, Character*);
		void loseHealth(double);
		int getHealth();
		int getSpecialAttack();
		
};
#endif
