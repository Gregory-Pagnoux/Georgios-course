void merge(int* numArray, int lowerB, int middle, int upperB){
    int sizeLeft = middle - lowerB + 1;
    int sizeRight = upperB - middle;

    int* leftArray = new int[sizeLeft];
    int* rightArray = new int[sizeRight];

    for(int i = 0; i < sizeLeft; i++){
        leftArray[i] = numArray[lowerB + i];
    }
    for(int i = 0; i < sizeRight; i++){
        rightArray[i] = numArray[middle + 1 + i];
    }

    int i, j, k;
    i = 0; //index of the left array
    j = 0; //index of the right array
    k = lowerB; //index of the main array

    while((i < sizeLeft) && (j < sizeRight)){
        if(leftArray[i] <= rightArray[i]){
            numArray[k] = leftArray[i];
            i++;
        }
        else{
            numArray[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while(i < sizeLeft){
        numArray[k] = leftArray[i];
        i++;
        k++;
    }
    while(i < sizeRight){
        numArray[k] = rightArray[j];
        j++;
        k++;
    }

    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int* numArray, int lowerB, int upperB){
    if(lowerB >= upperB){
        return;
    }
    int middle = lowerB + (upperB - lowerB) / 2;
    mergeSort(numArray, lowerB, middle);
    mergeSort(numArray, middle + 1, upperB);
    merge(numArray, lowerB, middle, upperB);
}
