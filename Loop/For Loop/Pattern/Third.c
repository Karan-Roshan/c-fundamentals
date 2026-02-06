#include<stdio.h>

int main() {
    int r=5; //r=rows

    for (int i=1; i<=r; i++) {
        for (int j=1; j<=i; j++) {
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
}