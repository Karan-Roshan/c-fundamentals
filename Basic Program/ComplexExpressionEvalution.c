// Explore Operation Precedence and Expression Evaluation
// Complex Expression Operation

#include <stdio.h>

int main()
{
    int A, B, C, D;
    printf("Enter A, B, C & D: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    float Expression = (A+B)*(C-D)/(A%D);

    printf("Expression Result = %f", Expression);

    return 0;
}