// get memory address using address of operator

#include<stdio.h>

int main() {
    int Integer=1;
    char character='c';
     float real = 10.4f;
    long long biginteger = 989898989ll;

    printf("Value of Integer: %d, Address of Integer: %u \n", Integer, &Integer);
    printf("Value of Integer: %d, Address of Integer: %u \n", character, &character);
    printf("Value of real = %f, Address of real = %u\n", real, &real);
    printf("Value of biginteger = %lld, Address of biginteger = %u", biginteger, &biginteger);

    return 0;
}