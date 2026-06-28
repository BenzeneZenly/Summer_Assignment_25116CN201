#include <stdio.h>

int main() {
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percent;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percent = total / 5.0;

    printf("\nMarksheet\n");
    printf("Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f\n", percent);

    if (percent >= 90)
        printf("Grade: A+\n");
    else if (percent >= 75)
        printf("Grade: A\n");
    else if (percent >= 60)
        printf("Grade: B\n");
    else if (percent >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}