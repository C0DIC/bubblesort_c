#include <stdio.h>
#include "bubblesort.h"

int main() {
    // Getting array size from user swith scanf()
    int SIZE;
    printf("Enter the size of array: "); scanf("%d", &SIZE);

    // Creating array size of SIZE
    int array[SIZE];
    
    // Going through the array to fill it
    for (int i = 0; i < SIZE; i++) {
        printf("Enter [%d] number: ", i + 1); scanf("%d", &array[i]);
    }

    // Creating new array to store sorted data
    int *new_arr = sort(array, SIZE);

    // Show sorted data into the terminal
    for (int i = 0; i < SIZE; i++)
        printf("[SORTED]: %d\n", new_arr[i]);

    return 0;
}