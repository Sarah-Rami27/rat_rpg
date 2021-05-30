#ifndef _PIERCING_TEST_HPP_
#define _PIERCING_TEST_HPP_

#include "../header/Piercing.h"
#include "../header/WarriorWeapon.h"
#include "../header/MageWeapon.h"

TEST(PiercingTest, EnemyDefZero){
    Weapon* test = new WarriorWeapon();
    Weapon* pier = new Piercing(test, 0);
    EXPECT_EQ(pier->calculateDamage(0,0), 1);

}

TEST(PiercingTest, EnemyDefFive ){
    Weapon* test = new WarriorWeapon();
    Weapon* pier = new Piercing(test, 10);
    EXPECT_TRUE(1.7 <= pier->calculateDamage(0,5) <= 3.35 );
}

TEST(PiercingTest, pierStack ){
    Weapon* test = new WarriorWeapon();
    Weapon* pier = new Piercing(test, 10);
    Weapon* pier2 = new Piercing(pier, 10);
    EXPECT_TRUE(3.4 <= pier2->calculateDamage(0,5) <= 6.7 );
}

#endif

