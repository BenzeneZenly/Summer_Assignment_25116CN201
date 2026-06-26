#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i]; i++) {

        flag = 0;

        for(j = 0; j < i; j++) {
            if(str[i] == str[j]) {
                flag = 1;
                break;
            }
        }

        if(!flag)
            printf("%c", str[i]);
    }

    return 0;
}