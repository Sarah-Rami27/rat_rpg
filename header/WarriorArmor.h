#ifndef __WARRIOR_ARMOR_H__
#define __WARRIOR_ARMOR_H__

#include "Armor.hpp" 

class WarriorArmor: public Armor {
    public:
        WarriorArmor(); 
        WarriorArmor(double);
        ~WarriorArmor();
        double getDef(); 

};

#endif