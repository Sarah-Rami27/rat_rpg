#ifndef __MAGE_CHAR_H__
#define __MAGE_CHAR_H__

#include "Character.hpp"
#include "Enemy.h"

class MageChar: public Character {
    public:
        MageChar();
        MageChar(string, double, double, double);
        ~MageChar(); 
        void attack(Enemy*); 
        void defend(); 
        void reduceHealth(double damage); 
	    void increaseHealth(double heal);
};

#endif
