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
/* Mage Tests*/
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
TEST(MageChar, mageReduceDef){
    Character* mage = new MageChar();
    mage->reduceDefense();
    EXPECT_DOUBLE_EQ(mage->getDef(), 1.3333333333333333);
}
TEST(MageChar, mageHealth){
    Character* mage = new MageChar();
    mage->reduceHealth(5);
    EXPECT_EQ(mage->getCurHp(),13 );
}

TEST(MageChar, mageIncHealth){
    Character* mage = new MageChar();
    EXPECT_EQ(mage->getCurHp(), 16);
    mage->reduceHealth(5);
    mage->increaseHealth(2);
    EXPECT_EQ(mage->getCurHp(),15 );
}

/* Warrior Tests*/
TEST(WarriorChar, WarrAttack){
    Character* test = new WarriorChar();
    Enemy* enemy = new Enemy(0);
    test->attack(enemy);
    EXPECT_EQ(enemy->getHp(), 9.0);
}
TEST(WarriorChar, WarrDefend){
    Character* test = new WarriorChar();
    test->defend();
    EXPECT_EQ(test->getDef(), 20);
}
TEST(WarriorChar, WarrReduceDef){
    Character* test = new WarriorChar();
    test->reduceDefense();
    EXPECT_DOUBLE_EQ(test->getDef(), 5);
}
TEST(WarriorChar, WarrHealth){
    Character* test = new WarriorChar();
    test->reduceHealth(15);
    EXPECT_EQ(test->getCurHp(), 15);
}

TEST(WarriorChar, WarrIncHealth){
    Character* test = new WarriorChar();
    EXPECT_EQ(test->getCurHp(), 20);
    test->reduceHealth(15);
    test->increaseHealth(2);
    EXPECT_EQ(test->getCurHp(),17 );
}


#endif
