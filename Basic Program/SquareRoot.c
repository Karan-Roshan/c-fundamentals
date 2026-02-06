// Find Square Root of the no.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter no.: ");
    scanf("%d", &n);

    int root;
    root = sqrt(n);
    printf("Square root of %d is %d", n, root);
    return 0;
}