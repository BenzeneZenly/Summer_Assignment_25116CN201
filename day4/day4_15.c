#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == num)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}