#ifndef __EXILED_TEST_HPP
#define __EXILED_TEST_HPP
#include "gtest/gtest.h"
#include "ExiledMember.hpp"
using namespace std;

TEST(ExiledTest, specialAttack) {
	ExiledMember* e = new ExiledMember();
	EXPECT_EQ(e->loseHealth(5.0), e->getHealth()-5.0);
}
TEST(ExiledTest, getDamageTest) {
	ExiledMember* e = new ExiledMember();
	EXPECT_EQ(e->getDamage(), 4); 
}
TEST(ExiledTest, getHealthTest) {
	ExiledMember* e = new ExiledMember();
	EXPECT_EQ(e->getHealth(), 20);
}
TEST(ExiledTest, boostHealthTest) {
	ExiledMember* e = new ExiledMember();
	EXPECT_EQ(e->boost_health(), e->getHealth() + 2);
}
TEST(ExiledTest, loseHealthTest) {
	ExiledMember* e = new ExiledMember();
	EXPECT_EQ(e->loseHealth(5.0), e->getHealth() - 5.0);
}
