#ifndef __CRIT_CHANCE_H__
#define __CRIT_CHANCE_H__

#include "WeaponDecorator.hpp"
#include "Rng.h"

class CritChance: public WeaponDecorator {
    private:
        double critChance = 0.05; 
    public:
        CritChance(Weapon*, int);
        ~CritChance();
        double calculateDamage(double, double);
        void printStats(std::ostream&);
};

#endif