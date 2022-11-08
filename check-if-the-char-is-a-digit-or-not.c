#include<stdio.h>

// Checking if a given character is digit or not

int main()
{
    char a;
    printf("enter something : ");
    scanf("%c", &a);

    if (a >= '0' && a <= '9'){
        printf("%c is a digit", a);
    } else {
        printf("%c is a char", a);
    }
    return 0;
}
