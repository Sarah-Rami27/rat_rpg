#ifndef __RNG_TEST_HPP__
#define __RNG_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/Rng.h"
#include <random>

TEST(RngTest, rollGuaranteedSuccess) {
	srand(1);
	RNG* rng = new RNG();
	bool succ = rng->roll(1,1);
	EXPECT_EQ(succ, true);
	delete rng;
}

TEST(RngTest, rollGuaranteedFailure) {
	srand(1);
	RNG* rng = new RNG();
	bool succ = rng->roll(0,1);
	EXPECT_EQ(succ, false);
	delete rng;
}

TEST(RngTest, rollDoubleGuaranteedSuccess) {
	srand(1);
	RNG* rng = new RNG();
	bool succ = rng->roll(1.0,1.0);
	EXPECT_EQ(succ, true);
	delete rng;
}

TEST(RngTest, rollDoubleGuaranteedFailure) {
	srand(1);
	RNG* rng = new RNG();
	bool succ = rng->roll(0.0,1.0);
	EXPECT_EQ(succ, false);
	delete rng;
}

TEST(RngTest, pickDoubleGeneric) {
	srand(1);
	RNG* rng = new RNG();
	double random = rng->pickDouble(5.0, 10.0);
	EXPECT_LE(5.0, random);
	EXPECT_GE(10.0, random);
	delete rng;	
}

TEST(RngTest, pickDoubleSameInput) {
	srand(1);
	RNG* rng = new RNG();
	double random = rng->pickDouble(5.0, 5.0);
	EXPECT_EQ(random, 5.0);
	delete rng;	
}

TEST(RngTest, pickIntGeneric) {
	srand(1);
	RNG* rng = new RNG();
	int random = rng->pickInt(2, 7);
	EXPECT_LE(2, random);
	EXPECT_GE(7, random);
	delete rng;	
}

TEST(RngTest, pickIntSameInput) {
	srand(1);
	RNG* rng = new RNG();
	int random = rng->pickInt(5, 5);
	EXPECT_EQ(random, 5);
	delete rng;	
}

#endif //__RNG_TEST_HPP__
