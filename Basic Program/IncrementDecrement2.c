// Increment & Decrement
// Postfix

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);

    // Increment
    printf("Postfix Increment:\n");
    printf("a = %d \n", a);     
    printf("a++ = %d \n", a++);
    printf("a = %d \n \n", a); 

    // Decrement
    printf("Postfix Decrement:\n");
    printf("b = %d \n", b); 
    printf("b-- = %d \n", b--); 
    printf("b = %d \n", b);

    return 0;
}