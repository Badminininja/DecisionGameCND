#include "Goblin.hpp"

TEST(GoblinTest, loseHealthTest) {
	Goblin* g = new Goblin;
	g->loseHealth(5.0);
	EXPECT_DOUBLE_EQ(g->getHealth(), 15.0);
}
TEST(GoblinTest, getHealthTest) {
	Goblin* g = new Goblin;
	EXPECT_DOUBLE_EQ(g->getHealth(), 20.0);
}
TEST(GoblinTest, getAttackTest) {
	Goblin* g = new Goblin;
	EXPECT_DOUBLE_EQ(g->getSpecialAttack(), 4.0);
}

