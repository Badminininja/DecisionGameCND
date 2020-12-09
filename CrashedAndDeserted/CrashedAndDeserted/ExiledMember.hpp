#ifndef CLASS_ORC
#define CLASS_ORC
#include <iostream>
#include "character"
using namespace std;

class ExiledMember {
	private:
		static ExiledMember* exiled_instance;
		double specialAttack;
		int health = 20;
		int damage = 4;
	public:
		ExiledMember();
		static ExiledMember* get_exiled_instance();
		void boost_health();
		void loseHealth();
		void special_attack(Character*);	
};
#endif
