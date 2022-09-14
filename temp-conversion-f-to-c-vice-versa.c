#include<stdio.h>

// C program to convert temperature `F to`C and vice versa.

int main()
{
    int conv_type;
    int f, c;
    printf(" Which type of conversion you want to do ? \n");
    printf(" press (1)+Enter for \" converting `F --> `C \" \n");
    printf(" press (2)+Enter for \" converting `C --> `F \" \n");
    scanf("%d", &conv_type);
    if (conv_type == 1) {
        printf("Enter `F value : ");
        scanf("%d", &f);
        c = (5* (f - 32)) / 9;
        printf("`F:%d ==> `C:%d", f, c);
    } else if (conv_type == 2) {
        printf("Enter `C value : ");
        scanf("%d", &c);
        f = (9 * c / 5)+32;
        printf("`C:%d ==> `F:%d", c, f);
    } else {
        printf("\tInvalid input.");
    }
    return 0;
}
