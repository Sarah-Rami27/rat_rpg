#include "gtest/gtest.h"

#include "weapon_test.hpp"
#include "weapon_decorator_test.hpp"
#include "warrior_factory_test.hpp"
#include "mage_factory_test.hpp"
#include "game_test.hpp"
#include "armor_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
