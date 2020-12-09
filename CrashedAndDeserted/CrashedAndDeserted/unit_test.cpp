#include "gtest/gtest.h"

#include "Orc.hpp"
#include "Boss.hpp"
#include "Dice6AppTest.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
