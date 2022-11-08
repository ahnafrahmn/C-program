#include<stdio.h>

// Checking if the given number is a prime number or not

int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);

    if ((num == 1) || (num > 3) && ((num % 2 == 0) || (num % 3 == 0))){
        printf("%d is not a prime number.", num);
    } else {
        printf("%d is a prime number.", num);
    }
    return 0;
}
