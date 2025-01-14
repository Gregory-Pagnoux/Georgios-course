#include <iostream>
#include <string>

#include "RPGclass.h"

using namespace std;

int main(){
    RpgClass Character1("Arthas", "Paladin", "Hammer");
    RpgClass Character2("Aro", "Dwarf", "Knife");
    RpgClass Character3("Beatis", "Sorcer", "Wand");
    RpgClass Character4("Zanita", "Dwarf", "Sword");

    string CharacterName1 = Character1.getName();
    cout << "name 1: " << CharacterName1 << endl;
    string CharacterClass1 = Character1.getPlayerClass();
    cout << "player class 1: " << CharacterClass1 << endl;
    string CharacterWeapon1 = Character1.getWeaponType();
    cout << "weapon type 1: " << CharacterWeapon1 << endl;
    string CharacterName2 = Character2.getName();
    cout << "name 2: " << CharacterName2 << endl;

    return 0;
}
