// Enhance the factorial calculation program you've previously written. Allow the user to input a positive integer to calculate the factorial. Additionally, allow the user to specify a limit for the factorial calculation. If the factorial exceeds the specified limit, use the break statement to exit the calculation loop.

#include <stdio.h>

int main()
{
    int number, limit;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Enter the limit for factorial calculation: ");
    scanf("%d", &limit);

    if (number < 0 || limit < 0)
    {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    for (int i = 1; i <= number; ++i)
    {
        factorial *= i;

        if (factorial > limit)
        {
            printf("Factorial exceeds the specified limit of %d\n", limit);
            printf("Factorial of %d is greater than %d\n", number, limit);
            break;
        }
    }

    if (factorial <= limit)
    {
        printf("Factorial of %d is: %llu\n", number, factorial);
    }

    return 0;
}
