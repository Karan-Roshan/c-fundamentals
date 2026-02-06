// Display the final price after applying the discount

#include<stdio.h>

int main() {
    int price;
    printf("Enter price of the product: Rs.");
    scanf("%d", &price);

    int discount;
    printf("Enter discount: ");
    scanf("%d", &discount);

    float finalPrice = price - (discount * price)/100;
    printf("Final price = %f", finalPrice);
    return 0;
} 