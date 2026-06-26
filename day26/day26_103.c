#include <stdio.h>

int main() {
    int balance = 10000;
    int choice, amount;

    printf("1. Check Balance\n2. Deposit\n3. Withdraw\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Balance = %d", balance);
            break;

        case 2:
            scanf("%d", &amount);
            balance += amount;
            printf("New Balance = %d", balance);
            break;

        case 3:
            scanf("%d", &amount);
            if(amount <= balance) {
                balance -= amount;
                printf("New Balance = %d", balance);
            } else {
                printf("Insufficient Balance");
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}