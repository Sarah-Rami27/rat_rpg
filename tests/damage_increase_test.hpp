#ifndef __DAMAGE_INCREASE_TEST_HPP__
#define __DAMAGE_INCREASE_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/DamageIncrease.h"
#include "../header/WarriorWeapon.h"
#include "../header/MageWeapon.h"

TEST(DamageIncreaseTest, LevelZero) {
    Weapon* warWep = new WarriorWeapon(); 
    Weapon* dmgInc = new DamageIncrease(warWep, 0); 
    EXPECT_DOUBLE_EQ(dmgInc->calculateDamage(0, 0), 1);
}

TEST(DamageIncreaseTest, LevelFour) {
    Weapon* warWep = new WarriorWeapon(); 
    Weapon* dmgInc = new DamageIncrease(warWep, 4);
    double damage = dmgInc->calculateDamage(0, 0); 
    EXPECT_TRUE(6 < damage < 10);
}

TEST(DamageIncraseTest, StackedPerk) {
    Weapon* warWep = new WarriorWeapon(); 
    Weapon* dmgInc = new DamageIncrease(warWep, 3);
    Weapon* dmgInc2 = new DamageIncrease(dmgInc, 3);
    double damage = dmgInc2->calculateDamage(0, 0);  
    EXPECT_TRUE(6.75 < damage < 18.75); 
}

#endif 