#ifndef _PIERCING_H_
#define _PIERCING_H_

#include "WeaponDecorator.hpp"
#include "Rng.h"

class Piercing : public WeaponDecorator{
    private:
        double piercing; 
    public:
        Piercing(Weapon*, int);
        ~Piercing();
        double calculateDamage(double, double);
        void printStats(std::ostream&);
};

#endif