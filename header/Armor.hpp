#ifndef __ARMOR_HPP__
#define __ARMOR_HPP__

#include <iostream>

using namespace std; 


class Armor {
    protected:
        double def; 

    public:
		virtual ~Armor() {}
        virtual double getDef() = 0; 
        virtual void printStats(std::ostream& out) {
            out << "Def: " << def << endl; 
        }

};

#endif 
