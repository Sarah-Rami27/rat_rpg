#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

using namespace std;

class Weapon {
    protected:
        double minDamage; 
        double maxDamage;
        int numHits;
        double critChance;
        double piercing;

    public:
        virtual double calculateDamage(double, double) = 0;     //passes in the character's atk and Enemy's def
        virtual double calculateLifeDrain() {
            return 0.0; 
        }
        virtual void printStats(std::ostream& out) {
            out << "Damage Range: " << minDamage << " - " << maxDamage << "\nNumber of hits: "
            << numHits << "\nCrit Chance: " << critChance << "\nPiercing: " << piercing << endl; 
        }

};

#endif 