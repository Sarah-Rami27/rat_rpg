#ifndef __MAGE_ARMOR_H__
#define __MAGE_ARMOR_H__

#include "Armor.hpp"

class MageArmor: public Armor {
    public:
        MageArmor(); 
        MageArmor(double);
        ~MageArmor(); 
        double getDef(); 
};

#endif 