#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max = 0;

    fgets(str, sizeof(str), stdin);

    while(1) {
        if(str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';

            if(strlen(word) > max) {
                max = strlen(word);
                strcpy(longest, word);
            }

            j = 0;

            if(str[i] == '\0')
                break;
        }
        else {
            word[j++] = str[i];
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}