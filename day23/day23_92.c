#include <stdio.h>

int main() {
    char str[100];
    int i, j, max = 0, count;
    char ch;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i]; i++) {
        count = 0;

        for(j = 0; str[j]; j++) {
            if(str[i] == str[j])
                count++;
        }

        if(count > max) {
            max = count;
            ch = str[i];
        }
    }

    printf("%c occurs %d times", ch, max);

    return 0;
}