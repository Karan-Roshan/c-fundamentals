#include <stdio.h>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

int main() {
    int number = 6;
    int result = square(number);
    printf("Square of %d is: %d\n", number, result);
    
    return 0;
}
