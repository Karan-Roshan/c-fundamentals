// compare the values using all six relational operators (==, !=, >, <, >=, <=)

#include<stdio.h>

int main() {
    int a, b;
    printf("Enter the values of a & b resp.: ");
    scanf("%d %d", &a, &b);

    if (a==b) {
        printf("a is equal to b \n");
    }
    else {
        printf("a is not equal to b \n");
    }

    if (a>b) {
        printf("a is greater than b \n");
    }
    else {
        printf("b is greater than a \n");
    }

    if(a>=b) {
        printf("a is greater and equal to b \n");
    }
    else {
        printf("b is greater and equal to a \n");
    }
    

    return 0;
}