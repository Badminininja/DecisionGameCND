#include "gtest/gtest.h"

//#include "Goblin.hpp"
//#include "Boss.hpp"
//#include "ExiledMember.hpp"
//#include "Dice6AppTest.hpp"
#include "animalMageTest.hpp"
#include "animalWarriorTest.hpp"
#include "humanMageTest.hpp"
#include "humanWarriorTest.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
