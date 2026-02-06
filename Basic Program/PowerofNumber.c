// Find Power Of The Number

#include <stdio.h>
#include <math.h>

int main()
{
    float num;
    printf("Enter number: ");
    scanf("%f", &num);

    int n;
    printf("Enter exponent: ");
    scanf("%d", &n);

    float power;
    power = pow(num, n);
    printf("%f ^ %d = %f", num, n, power);
    return 0;
}