#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
        sum += arr[i];

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nSum = %d", sum);

    return 0;
}