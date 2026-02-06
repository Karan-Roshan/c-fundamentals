// sum & avrerage of n natural number

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);

    int sum = 0;
    float average;

    for (i = 0; i <= n; i = i + 1)
    {
        sum = sum + i;
    }
    average = sum / n;
    printf("Sum of %d natural number = %d \n", n, sum);
    printf("average = %f", average);
    return 0;
}