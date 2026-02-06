// printf the series of even no.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter no.: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i = i + 2)
    {
        printf("%d \n", i);
    }
    return 0;
}