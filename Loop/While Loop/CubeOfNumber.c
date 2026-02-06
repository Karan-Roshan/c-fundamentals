// Cube of the number from 1 to n

#include <stdio.h>

int main()
{
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);

    int i = 1;

    int cube;

    while (i <= n)
    {
        cube = i*i*i;
        printf("Cube of %d is %d \n", i, cube);
        i++;
    }
    return 0;
}