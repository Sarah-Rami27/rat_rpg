#ifndef __WARRIOR_CHAR_H__
#define __WARRIOR_CHAR_H__

#include "Character.hpp"

class WarriorChar: public Character {
    public:
        WarriorChar();
        WarriorChar(string, double, double, double);
        ~WarriorChar(); 
        void attack(); 
        void defend(); 
        void reduceHealth(); 

};

#endif