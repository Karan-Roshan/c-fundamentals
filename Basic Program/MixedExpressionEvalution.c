// Explore Operation Precedence and Expression Evaluation
// Mixed Expression Operation

#include <stdio.h>

int main()
{
    int P, Q, R, S, T;
    printf("Enter P, Q, R, S & T: ");
    scanf("%d %d %d %d %d", &P, &Q, &R, &S, &T);

    float Expression = (P+Q)*(R/S)-T;

    printf("Expression Result = %f", Expression);

    return 0;
}