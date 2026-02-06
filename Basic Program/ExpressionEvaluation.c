// Explore Operation Precedence and Expression Evaluation
// Expression Operation

#include <stdio.h>

int main()
{
    int X, Y, Z;
    printf("Enter X, Y & Z: ");
    scanf("%d %d %d", &X, &Y, &Z);

    float Expression = X - Y / (3 + Z) * (2 - 1);

    printf("Expression Result = %f", Expression);

    return 0;
}