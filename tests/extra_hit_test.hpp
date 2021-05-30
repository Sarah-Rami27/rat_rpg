#ifndef _EXTRA_HIT_HPP_
#define _EXTRA_HIT_HPP_

#include "gtest/gtest.h"
#include "../header/ExtraHit.h"
#include "../header/WarriorWeapon.h"
#include "../header/MageWeapon.h"

TEST(ExtraHitTest, oneExtraHit){
    Weapon* test = new WarriorWeapon();
    Weapon* exHit = new ExtraHit(test, 0);
    EXPECT_DOUBLE_EQ(exHit->calculateDamage(0,0), 2);
}

TEST(ExtraHitTest, ExtraHit){
    Weapon* test = new MageWeapon();
    Weapon* exHit = new ExtraHit(test, 0);
    Weapon* exHit2 = new ExtraHit(exHit, 0);
    EXPECT_DOUBLE_EQ(exHit2->calculateDamage(0,0), 4);
}

#endif //_EXTRA_HIT_HPP_
