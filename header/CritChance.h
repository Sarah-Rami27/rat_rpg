#ifndef __CRIT_CHANCE_H__
#define __CRIT_CHANCE_H__

#include "WeaponDecorator.hpp"
#include "Rng.h"

class CritChance: public WeaponDecorator {
    public:
        CritChance(Weapon*, int);
        ~CritChance();
        double calculateDamage(double, double);
};

#endif