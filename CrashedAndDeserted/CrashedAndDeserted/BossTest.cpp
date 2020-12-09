#ifndef __BOSS_TEST_HPP
#define __BOSS_TEST_HPP
#include "gtest/gtest.h"
#include "Boss.hpp"
using namespace std;

TEST(BossTest, attackDamage) {
	Boss* b = new Boss();
	EXPECT_EQ(b->attackDamage(100, 9), 104);
}
TEST(BossTest, attackDamageNeg) {
	Boss* b = new Boss();
	EXPECT_EQ(b->attackDamage(1, 3), -1);  
}
