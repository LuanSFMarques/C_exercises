// Reverse an array modifying the existing array without auxiliary arrays.
#include <stdio.h>

void reverse(int arr[], int size);

int main(void){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, size);

    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

}

void reverse(int arr[], int size){
    int index_size = size/2;
    int temp;
    for(int i = 0; i < index_size; i++){
        int temp = arr[i];
        arr[i] = arr[(size-1-i)];
        arr[(size-1-i)] = temp;
    }
}
