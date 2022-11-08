#include<stdio.h>

// Average of 3 numbers

int main()
{
    int a;
    int b;
    int c;
    printf("enter 1st number : ");
    scanf("%d", &a);
    printf("enter 2nd number : ");
    scanf("%d", &b);
    printf("enter 3rd number : ");
    scanf("%d", &c);
    printf("Average of the given three numbers : %d", (a+b+c)/3);
    return 0;
}
