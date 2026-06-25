#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i]; i++) {
        for(j = i + 1; str[j]; j++) {
            if(str[i] == str[j]) {
                printf("%c", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character");
    return 0;
}