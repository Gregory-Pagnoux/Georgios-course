#include <iostream>
#include <string>

#include "RPGclass.h"

using namespace std;

int main(){
    int array[5] = {27, 30, 45, 67, 69};
    for (int i = 0; i < 7; i++){
        insert(array[i]);
    }
    
    RpgClass Character1("Arthas", "Paladin", "Hammer");
    RpgClass Character2("Aro", "Dwarf", "Knife");
    RpgClass Character3("Beatis", "Sorcer", "Wand");
    RpgClass Character4("Zanita", "Dwarf", "Sword");

    RpgClass CharacterName = Character1.getName();
    cout << "name: " << CharacterName << endl;

    return 0;
}
