#ifndef CLASS_ORC
#define CLASS_ORC
#include <iostream>

using namespace std;

class Orc {
	private:
		static Orc* orc_instance;
		double specialAttack;
		int orc_health;
	public:
		Orc();
		static Orc* get_orc_instance();
		void boost_health();
		void special_attack(int);	
};
#endif
