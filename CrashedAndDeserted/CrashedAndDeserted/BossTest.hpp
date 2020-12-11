#ifndef __BOSS_TEST_HPP
#define __BOSS_TEST_HPP
#include "gtest/gtest.h"
#include "Boss.hpp"
using namespace std;
/*
TEST(BossTest, attackDamage) {
	Boss* b = new Boss();
	EXPECT_EQ(b->attackDamage(100, 9), 104);
}
TEST(BossTest, attackDamageNeg) {
	Boss* b = new Boss();
	EXPECT_EQ(b->attackDamage(1, 3), -1);  
}*/
TEST(BossTest, loseHealth) {
	Boss* b = new Boss();
	b->loseHealth(5.0);
	EXPECT_DOUBLE_EQ(b->getHealth(), 20.0);
}
TEST(BossTest, healthGetter) {
	Boss* b = new Boss();
	 EXPECT_DOUBLE_EQ(b->getHealth(), 25.0);
}
TEST(BossTest, damageGetter) {
	Boss* b = new Boss();
	 EXPECT_DOUBLE_EQ(b->getDamage(), 5.0);
}
#endif
