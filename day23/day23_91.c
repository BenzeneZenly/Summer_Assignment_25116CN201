#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int i, j, temp;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    if(strlen(s1) != strlen(s2)) {
        printf("Not Anagram");
        return 0;
    }

    int len = strlen(s1);

    for(i = 0; i < len - 1; i++) {
        for(j = i + 1; j < len; j++) {

            if(s1[i] > s1[j]) {
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }

            if(s2[i] > s2[j]) {
                temp = s2[i];
                s2[i] = s2[j];
                s2[j] = temp;
            }
        }
    }

    if(strcmp(s1, s2) == 0)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}