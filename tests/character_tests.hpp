#ifndef _CHARACTER_TESTS_HPP_
#define _CHARACTER_TESTS_HPP_

#include "gtest/gtest.h"
#include "../header/MageChar.h"
#include "../header/WarriorChar.h"


/*constructors*/
TEST(MageChar, defaultMage){
    Character* mage = new MageChar();
    std::string name = "Emile The Rat";
    EXPECT_EQ(mage->getName(), name);
}


#endif
