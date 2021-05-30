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
        virtual double calculateDamage(double, double) = 0;     //passes in the character's atk and Enemy's def
        virtual double calculateLifeDrain() {
            return 0.0; 
        }
        virtual void printStats(std::ostream& out) {
            out << "Damage Range: " << minDamage << " - " << maxDamage << endl;
            //"\nNumber of hits: " << numHits << "\nCrit Chance: " << critChance << "\nPiercing: " << piercing << endl; 
        }

};

#endif 