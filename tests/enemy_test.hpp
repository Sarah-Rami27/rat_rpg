#ifndef __ENEMY_TEST_HPP__
#define __ENEMY_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/Enemy.h"

//getter functions
TEST(EnemyTest, EnemyGetName) {
	Enemy* dummy = new Enemy(10);
	EXPECT_EQ(dummy->getName(), "Chef Skinner 10");
	delete dummy;
}

TEST(EnemyTest, EnemyGetHp) {
	Enemy* dummy = new Enemy(7);
	double health = (7 / 2.0) + 10.0; //current hp equation 
	EXPECT_DOUBLE_EQ(dummy->getHp(), health);
	delete dummy;
}

TEST(EnemyTest, EnemyGetAtk) {
	Enemy* dummy = new Enemy(7);
	double attack = (7 / 2.0) + 2.0; //current atk equation
	EXPECT_DOUBLE_EQ(dummy->getAtk(), attack);
	delete dummy;
}

TEST(EnemyTest, EnemyGetDef) {
	Enemy* dummy = new Enemy(7);
	double defense = (7 / 2.0); //current def equation
	EXPECT_DOUBLE_EQ(dummy->getDef(), defense);
	delete dummy;
}


#endif //__ENEMY_TEST_HPP__
