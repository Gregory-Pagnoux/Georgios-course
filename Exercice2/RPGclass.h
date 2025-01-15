#include <iostream>
#include <string>

using namespace std;

class RpgClass {
public:
    // Constructor
    RpgClass() : name(""), playerClass(""), weaponType(""), level(0) , ID(0){}
    RpgClass(string n, string x, string y, int a, int id) : name(n), playerClass(x), weaponType(y), level(a) {}

    // Getters
    string getName() const { return name; }
    string getPlayerClass() const { return playerClass; }
    string getWeaponType() const { return weaponType; }
    int getLevel() const { return level; }
    int getID() const {return ID;}

private:
    string name;
    string playerClass;
    string weaponType;
    int level;
    int ID;
};
