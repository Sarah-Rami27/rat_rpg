#ifndef _PIERCING_TEST_HPP_
#define _PIERCING_TEST_HPP_

#include "../header/Piercing.h"
#include "../header/WarriorWeapon.h"
#include "../header/MageWeapon.h"

TEST(PiercingTest, levelZero){
    Weapon* test = new WarriorWeapon();
    Weapon* pier = new Piercing(test, 0);
    EXPECT_EQ(pier->calculateDamage(0,0), 1);

}

#endif

