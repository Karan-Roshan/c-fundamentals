// Arithmetic Operation on different data types(integers, float-point numbers)

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);

    float M, N;
    printf("Enter M & N: ");
    scanf("%f %f", &M, &N);

    int sum, sub, mult, div;
    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    float SUM, SUB, MULT, DIV;
    SUM=M+N;
    SUB=M-N;
    MULT=M*N;
    DIV=M/N;

    printf("sum  is %d \n", sum);
    printf("sub  is %d \n", sub);
    printf("mult  is %d \n", mult);
    printf("div  is %d \n", div);

    printf("SUM  is %f \n", SUM);
    printf("SUB  is %f \n", SUB);
    printf("MULT  is %f \n", MULT);
    printf("DIV  is %f \n", DIV);

    return 0;
}