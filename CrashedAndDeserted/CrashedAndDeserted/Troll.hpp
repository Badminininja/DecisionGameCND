#ifndef CLASS_TROLL
#define CLASS_TROLL
#include <iostream>

using namespace std;

class Troll {
	private:
		static Troll* troll_instance;
		double attack_power;
		int health;
		int deflect;
	public:
		Troll();
		static Troll* get_troll_instance();
		double get_attack_power();
		void deflect_damage(int, int);
		void health_increase(int);
		
};
#endif
