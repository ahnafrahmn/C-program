#include<stdio.h>

int main()
{
    char name[80];
    printf("Enter your full name.\n");
    scanf("%[^\n]", name);
    printf("%s\n\n", name);
    return 0;
}
