#include<stdio.h>

//  Printing the smallest number from given inputs

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

    if (a<b && a<c)
    {
        printf("%d is the smallest number", a);
    }
    else if (b<c)
    {
        printf("%d is the smallest number", b);
    }
    else{
        printf("%d is the smallest number", c);
    }
    return 0;
}
