#include "Goblin.hpp"

TEST(GoblinTest, loseHealthTest) {
	Goblin* g = new Goblin;
	this->health = 20;
	EXPECT_EQ(g->loseHealth(5.0), 20);
}
TEST(GoblinTest, getHealthTest) {
	Goblin* g = new Goblin;
	this->health = 20;
	EXPECT_EQ(g->getHealth(), 20);
}
TEST(GoblinTest, getAttackTest) {
	Goblin* g = new Goblin;
	this->attack_power = 20;
}

