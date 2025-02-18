#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int search_int_element(int matrix[MAX][MAX], int rows, int cols, int number);

int main(void){
    int mtx[MAX][MAX] = { { 1, 5, 9, 11 },
                      { 14, 20, 21, 26 },
                      { 30, 34, 43, 50 } };
    int rows = sizeof(mtx)/sizeof(mtx[0]);
    int cols = sizeof(mtx[0])/sizeof(mtx[0][0]);

    int item1 = 21;
    int item2 = 90;

    if (search_int_element(mtx, rows, cols, item1)){
        printf("%d found!\n", item1);
    }
    else {
        printf("%d not found!\n", item1);
    }

    if (search_int_element(mtx, rows, cols, item2)){
        printf("%d found!\n", item2);
    }
    else {
        printf("%d not found!\n", item2);
    }


}

int search_int_element(int matrix[MAX][MAX], int rows, int cols, int number){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (matrix[i][j] == number){
                return true;
            }
        }
    }
    return false;
}
