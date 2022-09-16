#include<stdio.h>

// Table of the number user inputs

int main()
{
    int a;
    printf(" Enter a number : ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++){
        printf("\t%d x %d = %d\n", a, i, a*i);
    }
    return 0;
}

