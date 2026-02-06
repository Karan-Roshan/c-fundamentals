#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter positive integers (enter a negative number to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number < 0) {
            break;
        }

        if (number > 0) {
            sum += number;
            continue;
        }
    }

    printf("Sum of the positive integers entered: %d\n", sum);

    return 0;
}
