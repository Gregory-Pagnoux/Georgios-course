#include <iostream>
#include <string>

#include "balanceSTB.h"

using namespace std;

class RpgClass {
    public:
        // Constructor
        RpgClass() : name(""), playerClass(""), weaponType(""){}
        RpgClass(string n, string x, string y) : name(n), playerClass(x), weaponType(y){}

        //getters
        string getName() const {return name;}
        string getPlayerClass() const {return playerClass;}
        string getWeaponType() const {return weaponType;}
    private:
        string name;
        string playerClass;
        string weaponType;
};
