#ifndef __ARMOR_HPP__
#define __ARMOR_HPP__

using namespace std; 

class Armor {
    protected:
        double def; 

    public:
        virtual double getDef() = 0; 
        virtual void printStats(std::ostream& out) {
            out << "Def: " << def << endl; 
        }

};

#endif 