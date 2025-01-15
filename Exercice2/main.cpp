#include <iostream>
#include <string>

#include "RPGclass.h"
#include "balanceBST.h"

using namespace std;

int main() {
    // Create RpgClass objects
    RpgClass Character1("Arthas", "Paladin", "Hammer", 3);
    RpgClass Character2("Aro", "Sorcer", "Wand", 35);
    RpgClass Character3("Beatis", "Paladin", "Knife", 20);
    RpgClass Character4("Zanita", "Dwarf", "Sword", 15);
    RpgClass Character5("Ramatrok", "Sorcer", "Book", 20);
    RpgClass Character6("Angel", "Elf", "dagger", 15);
    RpgClass Character7("Malik", "Elf", "dagger", 18);

    // Create a BST for storing RpgClass objects
    BST characterBST;

    // Insert characters into the BST
    characterBST.insert(&Character1);
    characterBST.insert(&Character2);
    characterBST.insert(&Character3);
    characterBST.insert(&Character4);
    characterBST.insert(&Character5);
    characterBST.insert(&Character6);
    characterBST.insert(&Character7);

    // Print in-order traversal (sorted by level)
    cout << "In-order traversal of characters (sorted by level):" << endl;
    characterBST.inOrderTraversal();

    // Search for a character by level
    int searchLevel = 20;
    RpgClass* foundCharacter = characterBST.search(searchLevel);
    if (foundCharacter) {
        cout << "\nCharacter with level " << searchLevel << " found: " << foundCharacter->getName() << endl;
    } else {
        cout << "\nCharacter with level " << searchLevel << " not found!" << endl;
    }

    // Remove a character by level
    int removeLevel = 15;
    characterBST.remove(removeLevel);
    cout << "\nIn-order traversal after removal of character with level " << removeLevel << ":" << endl;
    characterBST.inOrderTraversal();

    return 0;

}
