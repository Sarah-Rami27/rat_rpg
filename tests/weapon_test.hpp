#ifndef __WEAPON_TEST_HPP__
#define __WEAPON_TEST_HPP__

#include "gtest/gtest.h" 

#include "../header/Weapon.hpp"
#include "../header/WarriorWeapon.h"
#include "../header/MageWeapon.h"

TEST(WarriorWeaponTest, DefaultCalcDmg) {
    Weapon* warWep = new WarriorWeapon(); 
    EXPECT_EQ(warWep->calculateDamage(0, 0), 1); 
}

TEST(WarriorWeaponTest, DefaultCalcLifeDrain) {
    Weapon* warWep = new WarriorWeapon(); 
    EXPECT_EQ(warWep->calculateLifeDrain(), 0); 
}

TEST(MageWeaponTest, DefaultCalcDmg) {
    Weapon* magWep = new MageWeapon(); 
    EXPECT_EQ(magWep->calculateDamage(0, 0), 1); 
}

TEST(MageWeaponTest, DefaultCalcLifeDrain) {
    Weapon* magWep = new MageWeapon(); 
    EXPECT_EQ(magWep->calculateLifeDrain(), 0); 
}


#endif