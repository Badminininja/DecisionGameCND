#ifndef __EXILED_TEST_HPP
#define __EXILED_TEST_HPP
#include "gtest/gtest.h"
#include "ExiledMember.hpp"
using namespace std;

TEST(ExiledTest, specialAttack) {
	ExiledMember* e = new ExiledMember();
	e->loseHealth(5.0);
	EXPECT_DOUBLE_EQ(e->getHealth(), 15.0);
}
TEST(ExiledTest, getDamageTest) {
	ExiledMember* e = new ExiledMember();
	 EXPECT_DOUBLE_EQ(e->getDamage(), 4.0); 
}
TEST(ExiledTest, getHealthTest) {
	ExiledMember* e = new ExiledMember();
	 EXPECT_DOUBLE_EQ(e->getHealth(), 20.0);
}
TEST(ExiledTest, boostHealthTest) {
	ExiledMember* e = new ExiledMember();
	e->boost_health();
	 EXPECT_DOUBLE_EQ(e->getHealth(), 22.0);
}
TEST(ExiledTest, loseHealthTest) {
	ExiledMember* e = new ExiledMember();
	e->loseHealth(5.0);
	 EXPECT_DOUBLE_EQ(e->getHealth(), 15.0);
}
#endif
