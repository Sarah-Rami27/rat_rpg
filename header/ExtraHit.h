#ifndef __EXTRA_HIT_H__
#define __EXTRA_HIT_H__

#include "WeaponDecorator.hpp"


class ExtraHit: public WeaponDecorator {
    public:
        ExtraHit(Weapon*, int);
        ~ExtraHit();
        double calculateDamage(double, double);
        void printStats(std::ostream&);
};

#endif