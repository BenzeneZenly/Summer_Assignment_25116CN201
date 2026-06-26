#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("1. Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Kolkata 4.Chennai\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("2. 5 + 3 = ?\n");
    printf("1.6 2.7 3.8 4.9\n");
    scanf("%d", &ans);

    if(ans == 3)
        score++;

    printf("Your Score = %d", score);

    return 0;
}