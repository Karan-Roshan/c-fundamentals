// Calculate total sales amount of the product

#include<stdio.h>

int main() {
    int Q;
    printf("Enter quantity: ");
    scanf("%d", &Q);

    float price;
    printf("Enter price of the product: ");
    scanf("%f", &price);

    float amount;
    amount=price * Q;

    printf("Amount of the product: %f", amount);
    return 0;
}
