#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

class Enemy;        // forward declaration to resolve circular dependency  
#include "Enemy.h"
#include "Armor.hpp"
#include "Weapon.hpp"

#include <string>  

using namespace std; 

class Character {
    protected:
        string name;
        double atk;
        double def;
        double curHp; 
        double maxHp; 
        Weapon* currWeapon;
        Armor* currArmor;

    public:
        virtual void attack(Enemy*) = 0; 
        virtual void defend() = 0; 

        virtual void reduceHealth(double damage) = 0;
        virtual void increaseHealth(double heal) = 0;

        virtual void printStats(std::ostream& out) {
            out << "Name: " + name + "\nAtk: " + to_string(atk) + "\nDef: " 
            + to_string(def) + "\nHp: " + to_string(curHp) + "/" + to_string(maxHp) << endl;
        } 

        string getName() const {
            return this->name;
        }
        double getAtk() const {
            return this->atk;
        }
        double getDef() const {
            return this->def;
        }
        double getCurHp() const {
            return this->curHp;
        }
        double getMaxHp() const {
            return this->maxHp;
        }
};

#endif 
