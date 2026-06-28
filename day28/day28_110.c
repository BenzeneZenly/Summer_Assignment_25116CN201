#include <stdio.h>

int main() {
    float balance = 10000, amount;
    int choice;

    printf("1.Deposit\n2.Withdraw\n3.Check Balance\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("New Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter amount: ");
            scanf("%f", &amount);
            if(amount <= balance) {
                balance -= amount;
                printf("New Balance = %.2f", balance);
            } else {
                printf("Insufficient Balance");
            }
            break;

        case 3:
            printf("Balance = %.2f", balance);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}