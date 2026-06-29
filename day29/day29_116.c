#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
};

int main() {
    struct Item i;

    printf("Enter Item ID: ");
    scanf("%d", &i.id);

    printf("Enter Item Name: ");
    scanf("%s", i.name);

    printf("Enter Quantity: ");
    scanf("%d", &i.quantity);

    printf("\nInventory Details\n");
    printf("Item ID: %d\n", i.id);
    printf("Item Name: %s\n", i.name);
    printf("Quantity: %d\n", i.quantity);

    return 0;
}