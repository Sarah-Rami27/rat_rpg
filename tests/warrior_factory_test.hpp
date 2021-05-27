#ifndef __WARRIOR_FACTORY_TEST_HPP__
#define __WARRIOR_FACTORY_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/WarriorFactory.h"

TEST(WarriorFactoryTest, CreateCharacter) {
    std::stringstream ss; 

    ClassTypeFactory* test = new WarriorFactory(); 
    Character* player = test->createCharacter();
    std::string stats = "Name: Remy The Rat\nAtk: 4\nDef: 10\nHp: 20/20\n"; 
    player->printStats(ss); 
    EXPECT_EQ(ss.str(), stats);
}


#endif