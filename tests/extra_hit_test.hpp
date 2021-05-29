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


#endif //_EXTRA_HIT_HPP_
