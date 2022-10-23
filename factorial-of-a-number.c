#include<stdio.h>

int main(){
    int a, b=1;
    printf("Enter a number : ");
    scanf("%d", &a);
    for(int i=a; i>0; i--){
        b = b * i;
    }
    printf("%d! = %d", a, b);
    return 0;
}
