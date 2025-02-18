// Given an integer array, find a maximum product of a triplet in the array.
// Example:
// Input:  arr[ ] = [10, 3, 5, 6, 20]
// output: 1200
// explanation: 10*6*20

#include <limits.h>

int max_triplet_product_bigo_n3(int arr[], int size);
int max_triplet_product_bigo_n(int arr[], int size);

int main(void){
    int arr[] = {
    34, 7, 23, -4, 5, 12, -45, 60, 33, 17, 99, 58, 21, -14, 83, 2,
    48, 19, 37, 73, -11, 56, 39, 101, 88, 25, -7, 66, 32, 27, 11, 4,
    55, 3, 68, 15, -33, 87, 9, 14, 77, 63, 29, 70, 41, -8, 50, 19,
    45, 92, 6, 82, 64, -16, 28, 59, 36, 81, 18, 22, 97, -21, 72, 31,
    20, 67, 90, 13, 85, 61, -9, 100, 26, 47, 16, 74, 5, 95, 58, 8,
    30, 51, 76, 53, -6, 40, 69, 10, 49, 24, 57, 43, 98, 62, 89, 35
    };
    int size = sizeof(arr)/sizeof(arr[0]);

    // First algorithm test
    int result1 = max_triplet_product_bigo_n3(arr, size);

    // Second algorithm test
    int result2 = max_triplet_product_bigo_nlogn(arr, size);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
}


int max_triplet_product_bigo_n3(int arr[], int size){
    int max_mult = INT_MIN;
    int mult;
    for (int i = 0; i < size - 2; i++){
        for (int j = i + 1; j < size - 1; j++){
            for (int k = j + 1; k < size; k++){
                mult = arr[i]*arr[j]*arr[k];
                if (mult > max_mult){
                    max_mult = mult;
                }
            }
        }
    }
    return max_mult;
}

int max_triplet_product_bigo_n(int arr[], int size){
    int max_1 = INT_MIN, max_2 = INT_MIN, max_3 = INT_MIN;

    for (int i = 0; i < size; i++){
        if (arr[i] > max_1){
            max_3 = max_2;
            max_2 = max_1;
            max_1 = arr[i];
        }
        else if (arr[i] > max_2){
            max_3 = max_2;
            max_2 = arr[i];
        }
        else if (arr[i] > max_3){
            max_3 = arr[i];
        }
    }
    return max_1 * max_2 * max_3;
}
