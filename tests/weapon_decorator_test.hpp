#ifndef __WEAPON_DECORATOR_TEST_HPP__
#define __WEAPON_DECORATOR_TEST_HPP__

#include "gtest/gtest.h" 

#include "../header/WarriorWeapon.h"
#include "../header/MageWeapon.h"
#include "../header/WeaponDecorator.hpp"
#include "../header/DamageIncrease.h"

TEST(DecoratorTest, DmgIncrease) {
    Weapon* warWep = new WarriorWeapon(); 
    Weapon* dmgInc = new DamageIncrease(warWep, 1); 
    EXPECT_EQ(dmgInc->calculateDamage(0, 0), 3);
}

TEST(DecoratorTest, DmgIncreaseTwo) {
    Weapon* warWep = new WarriorWeapon(); 
    Weapon* dmgInc = new DamageIncrease(warWep, 1);
    Weapon* dmgInc2 = new DamageIncrease(dmgInc, 1); 
    EXPECT_EQ(dmgInc2->calculateDamage(0, 0), 5);
}


#endif