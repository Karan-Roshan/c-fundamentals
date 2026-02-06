// Factorial of the number

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int i = 1;

    int fact=1;
if (n<=0) {
    printf("Error! Enter positive number");
}
else {
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of %d is %d", n, fact);
}
    return 0;
}