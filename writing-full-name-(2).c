#include<stdio.h>

// printing full name from a single input

int main()
{
    char firstName[10];
    char lastName[10];
    printf("enter your name: ");
    scanf("%s%s", firstName, lastName);
    printf("your name is %s %s", firstName,lastName);
    return 0;
}
