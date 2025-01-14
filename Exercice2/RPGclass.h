#include "balanceSTB.h"

class RpgClass {
    public:
        // Constructor
        RpgClass() : name(""), playerClass(""), weaponType(""){}
        RpgClass(string n, string x, string y) : name(n), playerClass(x), weaponType(y){}

        string getName() const (return name);
        string getPlayerClass() const (return playerClass);
        string getWeaponType() const (return weaponType);
    private:
        string name;
        string playerClass;
        string weaponType;
};

void getName(){
    
}

void getPlayerClass(){

}

void getWeaponType(){

}
