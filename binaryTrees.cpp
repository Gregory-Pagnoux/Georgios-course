#include <iostream>
#include <string>

using namespace std;

typedef struct node {
    int data;
    struct node* leftChild;
    struct node* rightChild;
} Node;

Node* ROOT = NULL;

void insert(int data){
    Node* temp = new Node;
    Node* current;
    Node* parent;

    temp->data = data;
    temp->leftChild = NULL;
    temp->rightChild = NULL;

    if(ROOT == NULL){
        ROOT = temp;
    } else {
        current = ROOT;
        parent = NULL;
        while(true){
            parent = current;
            if(data < parent->data){
                current = current->leftChild;
                if(current == NULL){
                    parent->leftChild = temp;
                    return;
                }
            } else {
                current = current->rightChild;
                if(current == NULL){
                    parent->rightChild = temp;
                    return;
                }
            }
        }
    }
}

void preOrderTraversal(Node* root){
    if(root != NULL){
        cout << root->data << endl;
        preOrderTraversal(root->leftChild);
        preOrderTraversal(root->rightChild);
    }
}

void inOrderTraversal(Node* root){
    if(root != NULL){
        preOrderTraversal(root->leftChild);
        cout << root->data << endl;
        preOrderTraversal(root->rightChild);
    }
}

void postOrderTraversal(Node* root){
    if(root != NULL){
        preOrderTraversal(root->leftChild);
        preOrderTraversal(root->rightChild);
        cout << root->data << endl;
    }
}

int main(){
    int array[5] = {27, 14, 35, 10, 19};
    for(int i = 0; i < 5; i++){
        insert(array[i]);
    }
    //cout << "pre-order traversal: " << endl;
    //cout << "in-order traversal: " << endl;
    cout << "post-order traversal: " << endl;
    //preOrderTraversal(ROOT);
    //inOrderTraversal(ROOT);
    postOrderTraversal(ROOT);
    return 0;
}
