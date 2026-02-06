// find the length of integer array

#include <stdio.h>
int main() {

    //simple C sizeof array
    int arr[] = {19,25,10,3,1,8,22,17,7,84,9,19,25,10,3,1,
             8,22,17,2};

             int length = sizeof(arr) / sizeof(arr[0]);
             
    printf(" The length of int array is : %d \n", length);
}