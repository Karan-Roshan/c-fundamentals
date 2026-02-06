// find the area and circumference of the circle

#include <stdio.h>

int main()
{
    float r; // r = radius
    printf("Enter radius of the circle: ");
    scanf("%f", &r);

    float area, circumference;
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    printf("Area of the Circle = %f \n", area);
    printf("Circumference of the Circle = %f \n", circumference);
    return 0;
}