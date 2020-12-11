#include "gtest/gtest.h"

//#include "GoblinTest.hpp"
#include "BossTest.hpp"
//#include "ExiledMemberTest.hpp"
//#include "Dice6AppTest.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
