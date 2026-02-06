// sum of even natural no

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 2; i <= n; i = i + 2)
    {
        sum = sum + i;
    }
    printf("Sum of all even no. b/w 1 to %d=%d", n, sum);
    return 0;
}
