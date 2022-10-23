#include<stdio.h>


int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    if(a>3 && (a%2==0 || a%3==0)){
        printf("%d is a composite number. ", a);
    } else if(a==1){
        printf("%d is neither composite nor prime number. ", a);
    } else {
        printf("%d is a prime number. ", a);
    }

    return 0;
}

