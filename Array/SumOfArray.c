// Sum of all array elements

#include<stdio.h>

int main() {
    int arr[10]={1, 4, 3, 8, 12, 87, 5, 45, 67, 87};

    int i;
    int sum=0;

    for (i=0; i<10; i++) {
        sum=sum+arr[i];
    }
    printf("%d", sum);
    return 0;
}