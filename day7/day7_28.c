#include <stdio.h>

int reverse = 0;

void reverseNum(int n) {
    if (n == 0)
        return;

    reverse = reverse * 10 + n % 10;
    reverseNum(n / 10);
}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    reverseNum(n);

    printf("Reverse = %d", reverse);

    return 0;
}