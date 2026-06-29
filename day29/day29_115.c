#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length = %d\n",
 strlen(str));

    printf("Reversed String = ");
    for(int i = strlen(str)-1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}