#ifndef CLASS_BOSS
#define CLASS_BOSS
#include "character.hpp"
//using namespace std;

class Boss {
	private:
		static Boss* boss_instance;
		//double attackDamage;
		double health = 25;
		double damage = 5;

	public:
		Boss();
		static Boss* get_boss_instance();
		double attackDamage(Character*);
		void reflectDamage(double, Character*);
		void loseHealth(double);
		double getHealth();
		double getDamage();
};
#endif
