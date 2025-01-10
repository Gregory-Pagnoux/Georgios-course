#include <iostream>
#include "mergeSort.h"

#define SIZE_N 50

using namespace std;

int _OP_COUNT = 0;
int _COMP_COUNT = 0;

void bubbleSort(int* numArray, int size){
    for(int i = 0; i < size-1; i++){
        bool swapped = false;
        for(int j = 0; j < size-i-1; j++){
            _COMP_COUNT++;
            if(numArray[j] > numArray[j+1]){
                _OP_COUNT++;
                int temp = numArray[j];
                numArray[j] = numArray[j+1];
                numArray[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

void insertSort(int* numArray, int size){
    for(int i = 0; i < size; i++){
        int j = i+1;
        _COMP_COUNT++;
        while((j > 1) && (numArray[j-1] > numArray[j])){
            _OP_COUNT++;
            int temp = numArray[j];
            numArray[j] = numArray[j-1];
            numArray[j-1] = temp;
            j= j-1;
        }
    }
}

void printArray(int* numArray, int size){
    cout << "Array contents: " << endl;
    for(int i = 0; i < size; i++){
        cout << numArray[i] << ", ";
    }
    cout << endl;
}

int main(){
    int myArray[SIZE_N];
    srand(95341);
    for(int i = 0; i < SIZE_N; i++){
        myArray[i] = rand()%SIZE_N;
    }
    //bubbleSort(myArray, SIZE_N);
    //insertSort(myArray, SIZE_N);
    mergeSort(myArray, 0, SIZE_N-1);
    printArray(myArray, SIZE_N);
    cout << "Operations: " << _OP_COUNT << endl;
    cout << "Comparisons: " << _COMP_COUNT << endl;
    return 0;
}
