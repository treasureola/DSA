#include <stdio.h>
#include "insertionSort.h"

int main(){
    int arr[] = {5,6,2,7,8,34,7,1,65,6,0,2,5,2,3};
    int length = sizeof(arr) / sizeof(arr[0]); //getting the length of the array
    insertion_sort(arr, length);
    for (int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}