#include "bubblesort.h"

// Bubble Sort function
int *sort(int *array, int arraySize) {
    if (arraySize <= 0) return (void*)0;

    int temp;
    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < arraySize; j++) {
            while (array[i] < array[j]) {                
                temp = array[i];
                array[i] = array[j]; array[j] = temp;
            }
        }
    }

    return array;
}