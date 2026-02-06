// Implement a program that prompts the user to input a number within a specified range (e.g., between 1 and 100). If the entered number is outside the specified range, use the goto statement to allow the user to re-enter a valid number. Display a message indicating the valid input once it is provided.

#include <stdio.h>

int main() {
    int minRange = 1;
    int maxRange = 100;
    int userInput;

    do {
        printf("Enter a number between %d and %d: ", minRange, maxRange);
        scanf("%d", &userInput);

        if (userInput < minRange || userInput > maxRange) {
            printf("Invalid input! Please enter a number between %d and %d.\n", minRange, maxRange);
        }
    } while (userInput < minRange || userInput > maxRange);

    printf("Valid input received: %d\n", userInput);

    return 0;
}
