#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>
#include "Rng.h"

using namespace std;

class Weapon {
    protected:
        double minDamage; 
        double maxDamage;
        RNG rng;

    public:
		virtual ~Weapon() {}
        virtual double calculateDamage(double, double) = 0;     //passes in the character's atk and Enemy's def
        virtual void printStats(std::ostream& out) {
            out << "DR: " << minDamage << " " << maxDamage << endl;
        }

};

#endif 
