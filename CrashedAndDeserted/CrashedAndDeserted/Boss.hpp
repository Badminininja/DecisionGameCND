#ifndef CLASS_BOSS
#define CLASS_BOSS
#include "character.hpp"
using namespace std;

class Boss {
	//static Boss bossObj = new Boss();
	private:
		static Boss* boss_instance;
		//double attackDamage;
		//static Boss bossObj = new Boss();
		double health = 25.0;
		double damage = 5.0;
	protected:
		//Boss();

	public:

		static Boss* get_boss_instance(){
			if(boss_instance == nullptr) {
				boss_instance = new Boss();
			}
			return boss_instance;			
		}
		double attackDamage(Character*);
		void reflectDamage(double, Character*);
		void loseHealth(double);
		double getHealth();
		double getDamage();
};
#endif
