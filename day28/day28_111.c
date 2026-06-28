#include <stdio.h>

int main() {
    int tickets;
    float price = 200, total;

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    total = tickets * price;

    printf("Total Amount = %.2f", total);

    return 0;
}