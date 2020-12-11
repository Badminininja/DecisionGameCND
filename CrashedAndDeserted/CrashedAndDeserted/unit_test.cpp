#include "gtest/gtest.h"

#include "GoblinTest.hpp"
#include "BossTest.hpp"
#include "ExiledMemberTest.hpp"
#include "Dice20AppTest.hpp"
#include "animalMageTest.hpp"
#include "animalWarriorTest.hpp"
#include "humanMageTest.hpp"
#include "humanWarriorTest.hpp"
#include "NormalRollTest.hpp"
#include "DisAdvRollTest.hpp"
#include "AdvRollTest.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
