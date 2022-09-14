#include<stdio.h>

//  C program to subtract two numbers without using minus(-) operator

int main()
{
    int a,b,result;
    printf("\tEnter first number: ");
    scanf("%d", &a);
    printf("\tEnter second number: ");
    scanf("%d", &b);

    result = a + ~b + 1;

    printf("\t\tAnswer : %d \n", result);
    return 0;
}
