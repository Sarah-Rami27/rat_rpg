#include "gtest/gtest.h"

#include "weapon_test.hpp"
#include "weapon_decorator_test.hpp"
#include "warrior_factory_test.hpp"
#include "mage_factory_test.hpp"
#include "game_test.hpp"
#include "character_tests.hpp"
#include "armor_test.hpp"
#include "damage_increase_test.hpp"
#include "crit_chance_test.hpp"
#include "enemy_test.hpp"
#include "rng_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
