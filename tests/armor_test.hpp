#ifndef __ARMOR_TEST_HPP__
#define __ARMOR_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/Armor.hpp"
#include "../header/WarriorArmor.h"
#include "../header/MageArmor.h"

TEST(WarriorArmorTest, GetDefTest) {
    Armor* warArmor = new WarriorArmor();
    EXPECT_EQ(warArmor->getDef(), 1);
}

TEST(WarriorArmorTest, CtorTest) {
    Armor* warArmor = new WarriorArmor(200);
    EXPECT_EQ(warArmor->getDef(), 200);
}

TEST(WarriorArmorTest, PrintStats) {
    std::stringstream ss;
    Armor* warArmor = new WarriorArmor(114); 
    std::string stats = "Def: 114\n";
    warArmor->printStats(ss);
    EXPECT_EQ(ss.str(), stats); 
}

TEST(MageArmorTest, GetDefTest) {
    Armor* magArmor = new MageArmor();
    EXPECT_EQ(magArmor->getDef(), 1);
}

TEST(MageArmorTest, CtorTest) {
    Armor* magArmor = new MageArmor(200);
    EXPECT_EQ(magArmor->getDef(), 200);
}

TEST(MageArmorTest, PrintStats) {
    std::stringstream ss;
    Armor* magArmor = new MageArmor(114); 
    std::string stats = "Def: 114\n";
    magArmor->printStats(ss);
    EXPECT_EQ(ss.str(), stats); 
}

#endif