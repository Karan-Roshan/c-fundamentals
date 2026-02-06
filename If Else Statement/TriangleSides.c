// input angle of triangle and check whether is valid or not
#include<stdio.h>
int main() {
    int side1, side2, side3;
    printf("Enter Sides of Triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1+side2>side3 || side1+side3>side2 || side2+side3>side1) {
        printf("Triangle is Valid");
    }
    else {
        printf("Triangle is Not Valid");
    }
}