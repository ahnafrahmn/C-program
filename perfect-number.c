#include<stdio.h>


int main(){
    int a, b=0;
    printf("Enter a number : ");
    scanf("%d", &a);
    for(int i=1; i<a; i++){
        if(a%i==0){
            b += i;
        }
    }
    if(b==a){
        printf("%d is a perfect number.\n", a);
    } else {
        printf("%d is not a perfect number.\n", a);
    }
    return 0;
}
