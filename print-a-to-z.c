#include<stdio.h>

// C program to print all alphabets in serial
int main()
{
    int a;
    printf(" Do you want to print capital letters or small letters ?\n");
    printf(" enter (1) for Capital letters\n enter (2) for small letters\n\t");
    scanf("%d", &a);
    if ( a == 1 ){
        for (char i = 'A'; i <= 'Z'; i++){
            printf("\t%c\n", i);
        }
    } else if ( a == 2 ){
        for (char i = 'a'; i <= 'z'; i++){
            printf("\t%c\n", i);
        }
    }
    return 0;
}
