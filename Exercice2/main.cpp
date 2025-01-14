#include <iostream>
#include <string>

#include "RPGclass.h"

using namespace std;

int main(){
    //create element of the class
    RpgClass Character1("Arthas", "Paladin", "Hammer", 3);
    RpgClass Character2("Aro", "Sorcer", "Wand", 35);
    RpgClass Character3("Beatis", "Paladin", "knife", 20);
    RpgClass Character4("Zanita", "Dwarf", "Sword", 15);

    //print character elements
    string CharacterName1 = Character1.getName();
    cout << "name 1: " << CharacterName1 << endl;
    string CharacterClass1 = Character1.getPlayerClass();
    cout << "player class 1: " << CharacterClass1 << endl;
    string CharacterWeapon1 = Character1.getWeaponType();
    cout << "weapon type 1: " << CharacterWeapon1 << endl;
    int CharacterLevel1 = Character1.getLevel();
    cout << "Level 1: " << CharacterLevel1 << endl;
    string CharacterName2 = Character2.getName();
    cout << "name 2: " << CharacterName2 << endl;

    //inOrderStorage();

    return 0;
}
