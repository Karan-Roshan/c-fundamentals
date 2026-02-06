// tales two number and perform an operator(+, -, *, /)

#include <stdio.h>

int main()
{
    char op;
    printf("Enter operator: ");
    scanf("%c", &op);

    int a, b;
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);

    if (op == '+')
    {
        printf("sum = %d", a + b);
    }
    else if (op == '-')
    {
        printf("Sub = %d", a - b);
    }
    else if (op == '*')
    {
        printf("Mult = %d", a * b);
    }
    else if (op == '/')
    {
        printf("Div = %d", a / b);
    }
    else
    {
        printf("Enter valid operator");
    }
    return 0;
}