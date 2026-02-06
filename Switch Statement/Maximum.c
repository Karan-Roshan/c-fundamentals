// Maximum between a & b
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);

    switch (a > b)
    {
    case 0:
        printf("b is maximum");
        break;

    case 1:
        printf("a is maximum");
        break;
    }
    return 0;
}