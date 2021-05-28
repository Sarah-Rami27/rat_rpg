#define private public
#ifndef _GAME_TEST_HPP_
#define _GAME_TEST_HPP_

#include "gtest/gtest.h"
#include "../header/Game.h"


TEST(GameTest, setFactory){
    Game testGame;
    testGame.setFactory(1);
    EXPECT_TRUE(testGame.factory != nullptr);
}

TEST(GameTest, createPlayerWarr){
   Game testGame;
   testGame.setFactory(1);
   testGame.createPlayer();
   std::string name = testGame.player->getName();
   EXPECT_EQ(name, "Remy The Rat");   //default name for warrior
}

TEST(GameTest, createPlayerMage){
   Game testGame;
   testGame.setFactory(2);
   testGame.createPlayer();
   std::string name = testGame.player->getName();
   EXPECT_EQ(name, "Emile The Rat");   //default name for Mage
}

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

TEST(GameTest, isAliveFalseW){
    Game testGame;
    testGame.setFactory(1);
    testGame.createPlayer();
    testGame.player->reduceHealth(30);
    EXPECT_FALSE(testGame.isAlive());
}

TEST(GameTest, isAliveFalseM){
    Game testGame;
    testGame.setFactory(2);
    testGame.createPlayer();
    testGame.player->reduceHealth(18);
    EXPECT_FALSE(testGame.isAlive());
}
#endif //_GAME_TEST_HPP_
