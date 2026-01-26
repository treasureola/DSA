#include "insertionSort.h"

int* insertion_sort(int arr[], int length){ //declare the function 
    for (int i=1; i<length; i++){ // go through the array, starting from 1st index
        int temp = arr[i]; // temp is the value that we are currently comapring with every value on the left hand side of i
        int j = i-1; //set j to i-1
        while ((j > -1) && (arr[j] > temp)){ //while we are not yet at the 0th index, and the current index is greater than temp
            arr[j+1] = arr[j]; //set the next index value to the valeu f the current index
            j--; //decrement j 
        } //compare again with current value
        arr[j+1] = temp; 
    }
    return arr;
}