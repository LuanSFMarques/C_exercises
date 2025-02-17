// Given an array of positive integers arr[] of size n, the task is to find second largest distinct element in the array.
// Note: If the second largest element does not exist, return -1.

// Example:
// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34

#include <stdio.h>

int second_largest(int arr[], int size);

int main(void){
    int arr[] = {10, 5, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = second_largest(arr, size);

    printf("Result: %d", result);
}

int second_largest(int arr[], int size){
    if (size < 2){
        return -1;
    }

    int largest = -1, secondlargest = -1;

    for(int i = 0; i < size; i++){
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        }
        else if ((arr[i] > secondlargest) && (arr[i] != largest)){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}
