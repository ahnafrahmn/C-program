#include<stdio.h>

int main(){
    int a, sample, b, c=0;
    printf("Enter a number : ");
    scanf("%d", &a);
    sample = a;
    while(sample>0){
        b = sample % 10;
        c = c * 10 + b;
        sample = sample / 10;
    }
    if (c==a){
        printf("%d is a palindrome number. \n", a);
    } else{
        printf("%d is not a palindrome number. \n", a);
    }

    return 0;
}
