#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    // Declaring a multidimensional array with 3 rows and 4 columns
    int multiArray[ROWS][COLS];

    // Initializing the array with some values
    int count = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            multiArray[i][j] = count++;
        }
    }

    // Accessing and printing the elements of the multidimensional array
    printf("Multidimensional Array Elements:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", multiArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
