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
//	protected:
//		Goblin(); 
	public:
		Goblin();
		static Goblin* get_goblin_instance();
		void attack_power_indicator(Character*);
		void deflect_damage(double, Character*);
		void loseHealth(double);
		double getHealth();
		double getSpecialAttack();
		
};
#endif
