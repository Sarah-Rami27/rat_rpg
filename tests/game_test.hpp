#ifndef _GAME_TEST_HPP_
#define _GAME_TEST_HPP_

#include "gtest/gtest.h"
#include "../header/Game.h"

TEST(GameTest, isAliveTest){
    Game testGame;
    testGame.setFactory(1);
    testGame.createPlayer();
    EXPECT_TRUE(testGame.isAlive());
}


#endif //_GAME_TEST_HPP_
