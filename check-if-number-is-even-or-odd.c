#include<stdio.h>

// Checking if the given number is Even or Odd

int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("%d is a even number.", num);
    } else {
        printf("%d is a odd number.", num);
    }
    return 0;
}
