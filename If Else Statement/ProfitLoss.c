// Calculate Profit And Loss

#include<stdio.h>
int main() {
    int SP, CP;
    printf("Enter SP & CP: ");
    scanf("%d %d", &SP, &CP);

int profit, loss;

    if (SP>CP) {
        profit=(SP-CP);
        printf("Profit = %d", profit);
    }
    else if (CP>SP) {
loss=(CP-SP);
printf("Loss = %d", loss);
    }
    else {
        printf("No Profit, No Loss");
    }
    
    return 0;
}