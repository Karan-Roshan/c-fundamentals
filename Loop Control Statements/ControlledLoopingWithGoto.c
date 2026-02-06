// Design an interactive factorial calculator. Prompt the user to input a positive integer for which they want to calculate the factorial. After displaying the result, provide the user with the option to calculate the factorial of another number. Use the goto statement to navigate between the calculation and exit options

#include <stdio.h>

int main() {
    char choice;

    start:
    printf("Enter a positive integer to calculate its factorial: ");
    int num;
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Please enter a positive integer.\n");
        goto start;
    }

    unsigned long long factorial = 1;
    int i;
    for (i = 1; i <= num; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", num, factorial);

    option:
    printf("Do you want to calculate the factorial of another number? (Y/N): ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y') {
        goto start;
    } else if (choice == 'N' || choice == 'n') {
        printf("Exiting the factorial calculator. Goodbye!\n");
    } else {
        printf("Invalid choice. Please enter Y/y or N/n.\n");
        goto option;
    }

    return 0;
}
