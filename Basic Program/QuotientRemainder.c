// takin dividend and divisor and get the quotient and remainder as output

#include<stdio.h>

int main() {
    int dividend;
    printf("Enter Dividend: ");
    scanf("%d", &dividend);

    int divisor;
    printf("Enter Divisor: ");
    scanf("%d", &divisor);

    int quotient, remainder;
    remainder = dividend % divisor;
    quotient = dividend / divisor;

    printf("Remainder = %d \n", remainder);
    printf("Quotient = %d \n", quotient);
    return 0;
}