#ifndef __CRIT_CHANCE_TEST_HPP__
#define __CRIT_CHANCE_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/CritChance.h"
#include "../header/WarriorWeapon.h"
#include "../header/MageWeapon.h"

// rand() is set as if srand(1) was called 
TEST(CritChanceTest, GuaranteedCrit) {
    Weapon* warWep = new WarriorWeapon(); 
    Weapon* crit = new CritChance(warWep, 50); 
    EXPECT_TRUE(1 <= crit->calculateDamage(0, 0) <= 4);
}

TEST(CritChanceTest, LevelZero) {
    Weapon* warWep = new WarriorWeapon(); 
    Weapon* crit = new CritChance(warWep, 0); 
    EXPECT_TRUE(1 <= crit->calculateDamage(0, 0) <= 4);
}

TEST(CritChanceTest, CritFail) {
    Weapon* warWep = new WarriorWeapon(); 
    Weapon* crit = new CritChance(warWep, 25); 
    EXPECT_TRUE(1 <= crit->calculateDamage(0, 0) <= 2);
}

TEST(CritChanceTest, CritPass) {
    Weapon* warWep = new WarriorWeapon(); 
    Weapon* crit = new CritChance(warWep, 27); 
    EXPECT_TRUE(1 <= crit->calculateDamage(0, 0) <= 4);
}

#endif 
