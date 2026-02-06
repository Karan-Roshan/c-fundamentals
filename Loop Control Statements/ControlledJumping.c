#include <stdio.h>

int main() {
    char choice;
    float num1, num2, result;

    while (1) {
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("Enter two numbers for addition: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2f\n\n", result);
                break;

            case '2':
                printf("Enter two numbers for subtraction: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2f\n\n", result);
                break;

            case '3':
                printf("Enter two numbers for multiplication: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2f\n\n", result);
                break;

            case '4':
                printf("Enter two numbers for division: ");
                scanf("%f %f", &num1, &num2);
                if (num2 == 0) {
                    printf("Error! Division by zero is not allowed.\n\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2f\n\n", result);
                }
                break;

            case '5':
                printf("Exiting the calculator. Goodbye!\n");
                goto end;

            default:
                printf("Invalid choice. Please enter a valid option.\n\n");
                break;
        }
    }

    end:
    return 0;
}
