#ifndef _EXTRA_HIT_HPP_
#define _EXTRA_HIT_HPP_

#include "gtest/gtest.h"
#include "../header/ExtraHit.h"
#include "../header/WarriorWeapon.h"
#include "../header/MageWeapon.h"

TEST(ExtraHitTest, oneExtraHit){
    Weapon* test = new WarriorWeapon();
    Weapon* exHit = new ExtraHit(test, 0);
    EXPECT_TRUE(2 <= exHit->calculateDamage(0,0) <= 4);
}

TEST(ExtraHitTest, ExtraHit){
    Weapon* test = new MageWeapon();
    Weapon* exHit = new ExtraHit(test, 0);
    Weapon* exHit2 = new ExtraHit(exHit, 0);
    EXPECT_TRUE(4 <= exHit2->calculateDamage(0,0) <= 8);
}

#endif //_EXTRA_HIT_HPP_
