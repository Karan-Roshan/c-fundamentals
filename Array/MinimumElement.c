// find the maximum element in the array

#include<stdio.h>

int main() {
    int arr[10]={78, 86, 32, 97, 76, 4, 65, 87, 34, 10};

    int min=arr[0];

    for (int i=1; i<10; i++) {
        if (arr[i]<min) {
            min=arr[i];
        }
    }
    printf("Minimum element in array is %d", min);
    return 0;
}