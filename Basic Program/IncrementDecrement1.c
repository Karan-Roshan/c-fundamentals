// Increment & Decrement
// Prefix

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);

    // Increment
    printf("Prefix Increment:\n");
    printf("a = %d \n", a);     
    printf("++a = %d \n \n", ++a);

    // Decrement
    printf("Prefix Decrement:\n");
    printf("b = %d \n", b); 
    printf("--b = %d \n", --b); 
    
    return 0;
}