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
<<<<<<< HEAD
        virtual double calculateDamage() = 0;
=======
        virtual double calculateDamage(double, double) = 0;     //passes in the character's atk and Enemy's def
        virtual double calculateLifeDrain() = 0; 
>>>>>>> master

};

#endif 