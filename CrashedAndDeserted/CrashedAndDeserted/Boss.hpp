#ifndef CLASS_BOSS
#define CLASS_BOSS
#include "character.hpp"
using namespace std;

class Boss {
	private:
		static Boss* boss_instance;
		//double attackDamage;
		int health = 25;
		int damage = 5;
	public:
		Boss();
		static Boss* get_boss_instance();
		double attackDamage(Character*);
		void reflectDamage(double, Character*);
		void loseHealth(double);
};
#endif
