#ifndef __WARRIOR_FACTORY_TEST_HPP__
#define __WARRIOR_FACTORY_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/WarriorFactory.h"

TEST(WarriorFactoryTest, CreateCharacter) {
    std::stringstream ss; 

    ClassTypeFactory* test = new WarriorFactory(); 
    Character* player = test->createCharacter();
    std::string stats = "Name: Remy The Rat\nAtk: 6\nDef: 5\nHp: 20/20\n"; 
    player->printStats(ss); 
    EXPECT_EQ(ss.str(), stats);
}

TEST(WarriorFactoryTest, CreateArmor) {
    std::stringstream ss; 

    ClassTypeFactory* test = new WarriorFactory(); 
    Armor* armor = test->createArmor(1);
    std::string stats = "Def: 0.25\n";
    armor->printStats(ss);
    EXPECT_EQ(ss.str(), stats);
}

TEST(WarriorFactoryTest, CreateWeapon) {
    std::stringstream ss; 

    ClassTypeFactory* test = new WarriorFactory(); 
    Weapon* weapon = test->createWeapon(1);
    std::string stats = "Damage Range: 1.5 - 3.55556\n";
    weapon->printStats(ss);
    EXPECT_EQ(ss.str(), stats);
}


#endif
