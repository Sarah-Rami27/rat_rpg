#ifndef _CHARACTER_TESTS_HPP_
#define _CHARACTER_TESTS_HPP_

#include "gtest/gtest.h"
#include "../header/MageChar.h"
#include "../header/WarriorChar.h"


/*default constructors*/
TEST(MageChar, defaultMage){
    Character* mage = new MageChar();
    std::string name = "Emile The Rat";
    EXPECT_EQ(mage->getName(), name);
}

TEST(WarriorChar, defaultWarrior){
    Character* warrior = new WarriorChar();
    std::string name = "Remy The Rat";
    EXPECT_EQ(warrior->getName(), name);
}
/* Mage tests*/
TEST(MageChar, mageAttack){
    Character* mage = new MageChar();
    Enemy* enemy = new Enemy(0);
    mage->attack(enemy);
    EXPECT_EQ(enemy->getHp(), 9.0);
}
TEST(MageChar, mageDefend){
    Character* mage = new MageChar();
    mage->defend();
    EXPECT_EQ(mage->getDef(),3 );
}

#endif
