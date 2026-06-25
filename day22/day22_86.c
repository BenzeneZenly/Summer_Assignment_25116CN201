#include <stdio.h>

int main() {
    char str[200];
    int i, words = 1;

      fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            words++;
    }

    printf("Words = %d", words);

    return 0;
}