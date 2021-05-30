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
#endif //__RNG_TEST_HPP__
