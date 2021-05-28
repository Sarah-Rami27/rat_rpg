#ifndef _GAME_TEST_HPP_
#define _GAME_TEST_HPP_

#include "gtest/gtest.h"
#include "../header/Game.h"

TEST(GameTest, isAliveTrueW){
    Game testGame;
    testGame.setFactory(1);
    testGame.createPlayer();
    EXPECT_TRUE(testGame.isAlive());
}
TEST(GameTest, isAliveTrueM){
    Game testGame;
    testGame.setFactory(2);
    testGame.createPlayer();
    EXPECT_TRUE(testGame.isAlive()); 
}

#endif //_GAME_TEST_HPP_
