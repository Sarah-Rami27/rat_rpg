#ifndef __DAMAGE_INCREASE_H__
#define __DAMAGE_INCREASE_H__

#include "WeaponDecorator.hpp" 

class DamageIncrease: public WeaponDecorator {
    public:
        DamageIncrease(Weapon*); 
        ~DamageIncrease(); 
        double calculateDamage(double, double);  
};

#endif 