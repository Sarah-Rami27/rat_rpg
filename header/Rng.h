#ifndef __RNG_H__
#define __RNG_H__

#include <stdlib.h> //MAX_RAND()
#include <cmath> //ceil

class RNG {
   public:
	bool roll(int, int);
	double pickDouble(double, double);
};

#endif //__RNG_H__
