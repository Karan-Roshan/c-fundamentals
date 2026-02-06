#include<stdio.h>

int main() {
    int r=4;  //r=rows

    for (int i=0; i<=r; i++)  {
        for (int j=0; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}