#ifndef __RNG_CPP__
#define __RNG_CPP__

#include "../header/Rng.h"

bool RNG::roll(int good, int all) { //good = success, all = total rolls
    srand (time(NULL)); //init random seed

    double succRate = static_cast<double>(good) / all; //succRate = success percentage
    
    if(succRate == 0.00) { return false; }
    else if(succRate == 1.00) { return true; }
    else { return rand()/RAND_MAX <= succRate; }
}

#endif //__RNG_CPP__
