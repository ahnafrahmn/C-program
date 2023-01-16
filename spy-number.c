#include<stdio.h>



int main(){
    int num, a, b, c=0, d=1;
    printf("Enter a number : ");
    scanf("%d", &num);
    a = num;
    while(a>0){
        b = a % 10;
        c += b;
        d *= b;
        a /= 10;
    }
    if (c==d){
        printf("%d is a spy number. ", num);
    } else{
        printf("%d is not a spy number. ", num);
    }
    return 0;
}
