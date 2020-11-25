#ifndef CLASS_BOSS
#ifndef CLASS_BOSS

using namespace std;

class Boss {
	private:
		static Boss* boss_instance;
		double attackDamage;
		int health;
		int reflect;
	public:
		Boss();
		static Boss* get_boss_instance();
		double attackDamage(int, int);
		void reflectDamage();
};
#endif
