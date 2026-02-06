// find the length of Character array

#include <stdio.h>
int main() {

    //simple C sizeof array
    char arr[] = {'a','v','e','D','w','t','e','i','A','w','q','e','r'};

    //calculate the size of the char array
    size_t size = sizeof(arr) / sizeof(arr[0]);

    // print the size of char array
             
    printf("Size of char array is: %ld byte", size);
    return 0;
}