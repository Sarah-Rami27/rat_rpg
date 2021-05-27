#ifndef _MAGE_FACTORY_TEST_HPP__
#define _MAGE_FACTORY_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/MageFactory.h"

TEST(MageFactoryTest, CreateCharacter) {
    std::stringstream ss; 

    ClassTypeFactory* test = new MageFactory(); 
    Character* player = test->createCharacter();
    std::string stats = "Name: Remy The Rat\nAtk: 4\nDef: 10\nHp: 20/20\n"; 
    player->printStats(ss); 
    EXPECT_EQ(ss.str(), stats);
}

TEST(MageFactoryTest, CreateArmor) {
    std::stringstream ss; 

    ClassTypeFactory* test = new MageFactory(); 
    Armor* armor = test->createArmor();
    std::string stats = "Def: 1\n";
    EXPECT_EQ(ss.str(), stats);
}

TEST(MageFactoryTest, CreateWeapon) {
    std::stringstream ss; 

    ClassTypeFactory* test = new MageFactory(); 
    Weapon* weapon = test->createWeapon();
    std::string stats = "Damage Range: 1 - 1\nNumber of hits: 1\nCrit Chance: 0\nPiercing: 0\n";
    weapon->printStats(ss);
    EXPECT_EQ(ss.str(), stats);
}


#endif