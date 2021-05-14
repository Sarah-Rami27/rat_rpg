#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

using namespace std;

class Weapon {
    protected:
        double minDamage; 
        double maxDamage;
        int numHits;
        double critChance;
        double piercing;

    public:
        virtual double calculateDamage() = 0;
        virtual double calculateLifeDrain() = 0; 

};

#endif 