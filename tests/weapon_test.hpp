#define protected public
#ifndef __WEAPON_TEST_HPP__
#define __WEAPON_TEST_HPP__

#include "gtest/gtest.h" 

#include "../header/Weapon.hpp"
#include "../header/WarriorWeapon.h"
#include "../header/MageWeapon.h"


TEST(WarriorWeaponTest,defaultWeaponW){
    Weapon* warWep = new WarriorWeapon();
    EXPECT_EQ(warWep->minDamage, 1 );
    EXPECT_EQ(warWep->maxDamage, 2);
} 

TEST(WarriorWeaponTest,constrWeaponW){
    Weapon* warWep = new WarriorWeapon(1, 7);
    EXPECT_EQ(warWep->minDamage, 1 );
    EXPECT_EQ(warWep->maxDamage, 7);
}

TEST(MageWeaponTest,defaultWeaponM){
    Weapon* magWep = new MageWeapon();
    EXPECT_EQ(magWep->minDamage, 1 );
    EXPECT_EQ(magWep->maxDamage, 2);
}

TEST(MageWeaponTest,constrWeaponM){
    Weapon* magWep = new MageWeapon(1, 7);
    EXPECT_EQ(magWep->minDamage, 1 );
    EXPECT_EQ(magWep->maxDamage, 7);
}

TEST(WarriorWeaponTest, DefaultCalcDmg) {
    Weapon* warWep = new WarriorWeapon(); 
    EXPECT_TRUE(1 <= warWep->calculateDamage(0, 0) <= 2); 
}

TEST(MageWeaponTest, DefaultCalcDmg) {
    Weapon* magWep = new MageWeapon(); 
    EXPECT_TRUE(1 <= magWep->calculateDamage(0, 0) <= 2);
}

TEST(WarriorWeaponTest, WCalcDmg) {
    Weapon* warWep = new WarriorWeapon();
    EXPECT_TRUE(5 <= warWep->calculateDamage(4, 0) <= 6);
}

TEST(MageWeaponTest, MCalcDmg) {
    Weapon* magWep = new MageWeapon();
    EXPECT_TRUE(5 <= magWep->calculateDamage(4, 0) <= 6);
}

#endif
