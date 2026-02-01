#include "selectionSort.h"
#include <stdio.h>


/*

*/
int* selection_sort(int arr[], int length){ // Declare the function
    for (int i=0; i<length; i++){ //the current index we are trying to update with the correct value
        int min = i; //set the curent minimum to i
        for (int j=i+1; j<length; j++){ //the index we compare with minimum
            if (arr[j] < arr[min]){ //if there is a value less than the current minimum
                min = j; //set the index of that value as the index of the new min
            }
        }
        //Swap the new min with the current index we are at
        int temp = arr[min]; 
        arr[min] = arr[i];
        arr[i] = temp;
    }
    return arr;
}