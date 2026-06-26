#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    strcpy(temp, s1);
    strcat(temp, s1);

    if(strstr(temp, s2))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}