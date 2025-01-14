#include <iostream>
#include <string>

#include "balanceSTB.h"

using namespace std;

class RpgClass {
    public:
        // Constructor
        RpgClass() : name(""), playerClass(""), weaponType(""), level(0){}
        RpgClass(string n, string x, string y, int a) : name(n), playerClass(x), weaponType(y), level(a){}

        //getters
        string getName() const {return name;}
        string getPlayerClass() const {return playerClass;}
        string getWeaponType() const {return weaponType;}
        int getLevel() const {return level;}

    private:
        string name;
        string playerClass;
        string weaponType;
        int level;
};
