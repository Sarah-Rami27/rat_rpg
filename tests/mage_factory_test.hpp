#ifndef _MAGE_FACTORY_TEST_HPP__
#define _MAGE_FACTORY_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/MageFactory.h"

TEST(MageFactoryTest, CreateCharacter) {
    std::stringstream ss; 

    ClassTypeFactory* test = new MageFactory(); 
    Character* player = test->createCharacter();
    std::string stats = "Name: Emile The Rat\nAtk: 8\nDef: 2\nHp: 16/16\n"; 
    player->printStats(ss); 
    EXPECT_EQ(ss.str(), stats);
}

TEST(MageFactoryTest, CreateArmor) {
    std::stringstream ss; 

    ClassTypeFactory* test = new MageFactory(); 
    Armor* armor = test->createArmor(1);
    std::string stats = "Def: 0.2\n";
    armor->printStats(ss);
    EXPECT_EQ(ss.str(), stats);
}

TEST(MageFactoryTest, CreateWeapon) {
    std::stringstream ss; 

    ClassTypeFactory* test = new MageFactory(); 
    Weapon* weapon = test->createWeapon(0);
    std::string stats = "Damage Range: 1 - 5\n";
    weapon->printStats(ss);
    EXPECT_EQ(ss.str(), stats);
}


#endif