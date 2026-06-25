#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i]; i++) {
        count = 0;

        for(j = 0; str[j]; j++) {
            if(str[i] == str[j])
                count++;
        }

        if(count == 1) {
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}