#include <iostream>
#include <string>

using namespace std;

typedef struct node {
    int data;
    struct node* leftChild;
    struct node* rightChild;

}Node;

Node* ROOT = NULL;

void inOrderStorage(Node* root, vector<int>& nodeValues){
    if (root != NULL){
        inOrderStorage(root -> leftChild, nodeValues);
        nodeValues.push_back(root->data);
        inOrderStorage(root->rightChild, nodeValues);
        delete root;
    }
}

void sortedArrayToBalanceBST(Node* root, vector<int>& ndoeValues, int start, int end){
    if (start>end){
        return;
    }
    
    int median= (start + end)/2;
    Node* newNode = new Node;
    newNode->data = ndoeValues[median];
    newNode->leftChild = NULL;
    newNode->rightChild= NULL;

    root = newNode;

    sortedArrayToBalanceBST(newNode->leftChild, ndoeValues, start, median -1);
    sortedArrayToBalanceBST(newNode->rightChild, ndoeValues, median -1, end);
}

void balanceBST(Node* root){
    vector<int> nodeValuesInOrder;
    inOrderStorage(root, nodeValuesInOrder);
    sortedArrayToBalanceBST(root, nodeValuesInOrder, 0, nodeValuesInOrder.size() - 1);
}