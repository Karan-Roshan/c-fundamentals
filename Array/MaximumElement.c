// find the maximum element in the array

#include<stdio.h>

int main() {
    int arr[10]={78, 86, 32, 97, 76, 4, 65, 87, 34, 10};

    int max=arr[0];

    for (int i=0; i<10; i++) {
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    printf("Maximum element in array is %d", max);
    return 0;
}