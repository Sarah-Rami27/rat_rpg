#ifndef __WEAPON_DECORATOR_TEST_HPP__
#define __WEAPON_DECORATOR_TEST_HPP__

#include "gtest/gtest.h" 

#include "../header/WarriorWeapon.h"
#include "../header/MageWeapon.h"
#include "../header/WeaponDecorator.hpp"
#include "../header/DamageIncrease.h"
#include "../header/ExtraHit.h"
#include "../header/CritChance.h"
#include "../header/Piercing.h"

// Integration testing for decorator
// i.e combination of different perks 

TEST(DecoratorTest, twoPerks) {
    Weapon* test = new WarriorWeapon();
    Weapon* perk1 = new DamageIncrease(test, 1);
    Weapon* perk2 = new ExtraHit(perk1, 1 );
    EXPECT_TRUE(5 <= perk2->calculateDamage(0,0) <= 9);
}

TEST(DecoratorTest, threePerks) {
    Weapon* test = new WarriorWeapon();
    Weapon* perk1 = new CritChance(test, 5);
    Weapon* perk2 = new DamageIncrease(perk1, 5); 
    Weapon* perk3 = new ExtraHit(perk2, 5);
    EXPECT_TRUE(19 <= perk3->calculateDamage(0,0) <= 33 );   
}

TEST(DecoratorTest, fourPerks) {
    Weapon* test = new WarriorWeapon();
    Weapon* perk1 = new CritChance(test, 5);
    Weapon* perk2 = new DamageIncrease(perk1, 5);
    Weapon* perk3 = new ExtraHit(perk2, 5);
    Weapon* perk4 = new Piercing(perk3, 5);
    EXPECT_TRUE(19 <= perk3->calculateDamage(0,0) <= 33 );
}


#endif
