#include<stdio.h>

//  C program to read marks of a student and print percentage and division.

int main()
{
    int sub1, sub2, sub3, total;
    float percent;

    printf("Enter marks of 1st subject: ");
    scanf("%d", &sub1);
    printf("Enter marks of 2nd subject: ");
    scanf("%d", &sub2);
    printf("Enter marks of 3rd subject: ");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;

    percent = (float) total*100 / 300;

    if (percent >= 60) {
        printf("First division.");
    } else if (percent >= 50 && percent < 60) {
        printf("Second division.");
    } else if (percent >= 40 && percent < 50) {
        printf("Third division.");
    } else {
        printf("Fail");
    }
    return 0;
}

