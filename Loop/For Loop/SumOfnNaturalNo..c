// Sum of n natural no.

#include<stdio.h>

int main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);

    int sum=0;

    for(i=0; i<=n; i=i+1) {
        sum=sum+i;
    }
    printf("Sum of %d natural number: %d", n, sum);
    return 0;
}