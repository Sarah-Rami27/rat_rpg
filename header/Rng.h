#ifndef __RNG_H__
#define __RNG_H__

#include <stdlib.h> //MAX_RAND()
#include <time> //time used to init srand() seed

class RNG {
   public:
	bool roll(int, int);
};

#endif //__RNG_H__
