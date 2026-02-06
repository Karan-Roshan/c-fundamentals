// Find Simple interest
// p=princple, r=rate of interest, t=time

#include <stdio.h>

int main()
{
    int p, r, t;
    printf("Enter no.: ");
    scanf("%d %d %d", &p, &r, &t);

    float SI;
    SI = (p * r * t) / 100;
    printf("Simple interest is %f \n", SI);
    return 0;
}