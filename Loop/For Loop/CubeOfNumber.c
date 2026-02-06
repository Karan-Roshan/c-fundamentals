// Cube of the number

#include<stdio.h>

int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    int cube;

    for (i=1; i<=n; i++) {
        cube=i*i*i;
        printf("Cube of %d is %d \n", i, cube);
    }
    return 0;
}