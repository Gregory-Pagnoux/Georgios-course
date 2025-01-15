#include <iostream>
#include <string>
#include <vector>

using namespace std;

class RpgClass; // Forward declaration

// Define node structure for BST to store RpgClass
struct Node {
    RpgClass* data;
    Node* leftChild;
    Node* rightChild;
    
    Node(RpgClass* character) : data(character), leftChild(nullptr), rightChild(nullptr) {}
};

class BST {
public:
    BST() : root(nullptr) {}

    // Insert function to add new node to the graph
    void insert(RpgClass* character) {
        root = insertHelper(root, character);
    }

    // Remove function to remove all nodes to the graph with a given level
    void remove(int level) {
        root = removeHelper(root, level);
    }

    // Search function to research all nodes to the graph with the given level
    RpgClass* search(int level) {
        return searchHelper(root, level);
    }

    // Can print the graph sorted
    void inOrderTraversal() {
        inOrderTraversalHelper(root);
    }

private:
    Node* root;

    Node* insertHelper(Node* node, RpgClass* character) {
        if (node == nullptr) {
            return new Node(character);
        }
        
        if (character->getID() < node->data->getID()) {
            node->leftChild = insertHelper(node->leftChild, character);
        } else if (character->getID() > node->data->getID()) {
            node->rightChild = insertHelper(node->rightChild, character);
        }
        return node;
    }

    Node* removeHelper(Node* node, int level) {
        if (node == nullptr) return node;

        if (level < node->data->getID()) {
            node->leftChild = removeHelper(node->leftChild, level);
        } else if (level > node->data->getID()) {
            node->rightChild = removeHelper(node->rightChild, level);
        } else {
            if (node->leftChild == nullptr) {
                Node* temp = node->rightChild;
                delete node;
                return temp;
            } else if (node->rightChild == nullptr) {
                Node* temp = node->leftChild;
                delete node;
                return temp;
            }

            Node* temp = findMin(node->rightChild);
            node->data = temp->data;
            node->rightChild = removeHelper(node->rightChild, temp->data->getID());
        }
        return node;
    }

    Node* findMin(Node* node) {
        while (node && node->leftChild != nullptr) {
            node = node->leftChild;
        }
        return node;
    }

    RpgClass* searchHelper(Node* node, int level) {
        if (node == nullptr || node->data->getLevel() == level) {
            return node ? node->data : nullptr;
        }
        if (level < node->data->getLevel()) {
            return searchHelper(node->leftChild, level);
        }
        return searchHelper(node->rightChild, level);
    }

    void inOrderTraversalHelper(Node* node) {
        if (node != nullptr) {
            inOrderTraversalHelper(node->leftChild);
            cout << "Name: " << node->data->getName() << ", Level: " << node->data->getLevel() << endl;
            inOrderTraversalHelper(node->rightChild);
        }
    }
};
