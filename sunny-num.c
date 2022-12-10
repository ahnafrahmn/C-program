#include <stdio.h>
#include <math.h>

void main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    b = sqrt(a+1);
    if((a+1)==(b*b)){
        printf("\n\n Sunny num\n\n");
    } else{
        printf("\n\n Not Sunny num\n\n");

    }
}


