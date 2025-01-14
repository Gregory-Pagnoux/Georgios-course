#include <iostream>
#include <string>

using namespace std;

typedef struct node {
    int data;
    struct node* leftChild;
    struct node* rightChild;

}Node;

Node* ROOT = NULL;

void insert(int data){
    Node* temp = new Node;
    Node* current;
    Node* parent;

    temp->data = data;
    temp-> leftChild = NULL;
    temp -> rightChild = NULL;

    if(ROOT == NULL){
        ROOT = temp;
    } else {
        current=ROOT;
        parent = NULL;
        while(true){
            parent = current;
            
            if(data < parent-> data){
                current = current->leftChild;
                if(current == NULL){
                    parent->leftChild = temp;
                    return;
                }
            } else {
                current = current->rightChild;
                if(current == NULL){
                    parent->rightChild=temp;
                    return;
                }
            }
        }
    }
}

void preOrderTraversal(Node* root){
    if(root != NULL){
        cout<< root->data <<endl;
        preOrderTraversal(root->leftChild);
        preOrderTraversal(root->rightChild);

    }
}

void inOrderTraversal(Node* root){
    if (root != NULL){
        inOrderTraversal(root -> leftChild);
        cout<< root->data <<endl;
        inOrderTraversal(root->rightChild);
    }
}

void postOrderTraversal(Node* root){
    if(root != NULL){
        preOrderTraversal(root->leftChild);
        preOrderTraversal(root->rightChild);
        cout << root->data << endl;
    }
}

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
