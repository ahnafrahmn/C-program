#include<stdio.h>

// Checking if the given number is a prime number or not

int main()
{
    int num, i, prime=0;
    printf("enter a number : ");
    scanf("%d", &num);
    
    if ((num == 1) || (num == 0)){
        printf("%d is not a prime number.", num);
        return 0;
    }
    for(i=2; i<num; i++){
        if(num%i==0){
            prime++;
            break;
        }
    }
    if (prime==1){
        printf("%d is not a prime number.", num);
    } else {
        printf("%d is a prime number.", num);
    }
    return 0;
}
