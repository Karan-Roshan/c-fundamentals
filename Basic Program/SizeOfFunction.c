// Find the size of the Variable
// "%zu" to print the variable of size_t length
// z is length modifier and u stands for unsigned type

#include <stdio.h>

int main()
{
    int inttype;
    float floattype;
    double doubletype;
    char chartype;

    // size evalutes the size of a variable
    printf("size of int: %zu bytes \n", sizeof(inttype));
    printf("size of float: %zu bytes \n", sizeof(floattype));
    printf("size of double: %zu bytes \n", sizeof(doubletype));
    printf("size of char: %zu bytes \n", sizeof(chartype));
    return 0;
}
