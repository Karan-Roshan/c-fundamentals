// Find Diameter & Area of Circle

#include <stdio.h>

int main()
{
    float r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    float D, A, C;
    D = 2 * r;
    A = (3.14 * r * r);
    C = (2*3.14*r);
    printf("Diameter of Circle is %f unit \n", D);
    printf("Area of Circle is %f sq. unit  \n", A);
    printf("Circumference of Circle is %f unit  \n", C);

    return 0;
}