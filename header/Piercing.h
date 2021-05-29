#ifndef _PIERCING_H_
#define _PIERCING_H_

#include "WeaponDecorator.hpp"
#include "Rng.h"

class Piercing : public WeaponDecorator{
    public:
        Piercing(Weapon*, int);
        ~Piercing();
        double calculateDamage(double, double);
};

#endif