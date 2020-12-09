#ifndef CLASS_EXILED_MEMBER
#define CLASS_EXILED_MEMBER
#include <iostream>
#include "character"
using namespace std;

class ExiledMember {
	private:
		static ExiledMember* exiled_instance;
		double specialAttack;
		int health = 20;
		int damage = 4;
	protected:
		ExiledMember();
	public:
		static ExiledMember* get_exiled_instance();
		void boost_health();
		void loseHealth(double);
		void special_attack(Character*);	
		int getDamage();
		int getHealth();
};
#endif
