#ifndef CLASS_TROLL
#define CLASS_TROLL
#include <iostream>
#include "character.hpp"
using namespace std;

class Troll {
	private:
		static Troll* troll_instance;
		double attack_power = 4;
		double health = 20;
		//int deflect;
	public:
		Troll();
		static Troll* get_troll_instance();
		double attack_power_indicator(Character*);
		void deflect_damage(double, Character*);
		void loseHealth(double);
		
};
#endif
