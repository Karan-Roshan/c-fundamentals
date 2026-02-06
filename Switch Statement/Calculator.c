// Calculator

#include <stdio.h>
int main()
{
    char op;
    printf("Enter operator (+, -, /, *): ");
    scanf("%c", &op);

    int a, b;
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);

    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;

    case '-':
        printf("%d", a - b);
        break;

    case '/':
        printf("%d", a / b);
        break;

    case '*':
        printf("%d", a * b);
        break;

    default:
        printf("Enter valid operator");
    }
    return 0;
}