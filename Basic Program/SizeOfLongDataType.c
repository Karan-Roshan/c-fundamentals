// Size of lond Data Type
// "%zu" to print the variable of size_t length
// z is length modifier and u stands for unsigned type
#include <stdio.h>
int main()
{
    int inttype;
    float floattype;
    double doubletype;
    char chartype;
    int a;
    long b;
    long long c;
    double d;
    long double e;

    // l size evalutes the size of a variable
    printf("size of int: %zu bytes \n", sizeof(inttype));
    printf("size of float: %zu bytes \n", sizeof(floattype));
    printf("size of double: %zu bytes \n", sizeof(doubletype));
    printf("size of char: %zu bytes \n", sizeof(chartype));
    printf("size of int a: %zu bytes \n", sizeof(a));
    printf("size of long b: %zu bytes \n", sizeof(b));
    printf("size of long long c: %zu bytes \n", sizeof(c));
    printf("size of double d: %zu bytes \n", sizeof(d));
    printf("size of long double e: %zu bytes \n", sizeof(e));
    return 0;
}