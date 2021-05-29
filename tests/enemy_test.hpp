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

TEST(EnemyTest, EnemyReduceHealthDefgeqDamage) {
	Enemy* dummy = new Enemy(7);
	double health = (7 / 2.0) + 10.0; //starting hp for Enemy(7)
	dummy->reduceHealth(3.0); //dummy should lose no health because 3.5 def > 3.0 damage
	EXPECT_DOUBLE_EQ(dummy->getHp(), 13.5);
	delete dummy;
}

TEST(EnemyTest, EnemyReduceHealthDefleqDamage) {
	Enemy* dummy = new Enemy(7);
	double health = (7 / 2.0) + 10.0; //starting hp for Enemy(7)
	dummy->reduceHealth(4.5); //post-damage mitigation we expect (4.5 - 3.5) damage to be dealt
	health -= 1.0; //4.5 - 3.5 = 1.0
	EXPECT_DOUBLE_EQ(dummy->getHp(), 12.5);
	delete dummy;
}

TEST(EnemyTest, EnemyAttacks) {
	Enemy* dummy = new Enemy(7);
	Character* mageDummy = new MageChar("Jeff", 20.0, 5.0, 20.0);
	dummy->attack(mageDummy);
	EXPECT_DOUBLE_EQ(mageDummy->getCurHp(), 19.5);
	delete dummy;
}
#endif //__ENEMY_TEST_HPP__
