// Find area & perimeter of rectangle

#include<stdio.h>

int main() {
    float l,b;
    printf("Enter Measurement l & b: ");
    scanf("%f %f", &l, &b);

    float area, perimeter;
    area=l*b;
    perimeter=2*(l+b);

    printf("Enter Area of rectangle: %f \n", area);
    printf("Enter Perimeter of rectangle: %f \n", perimeter);

    return 0;

}