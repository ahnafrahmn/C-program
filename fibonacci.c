#include<stdio.h>

int main(){
    int a, b=0, c=1;
    int d = b + c;

    printf("give range of Fibonacci series you want to print : ");
    scanf("%d", &a);
    if(a==1){
        printf("0.");
    } else if(a==2){
        printf("0, 1.");
    } else if(a>2){
        printf("0, 1, ");
        for(int i=2; i<a; i++){
           d = b + c;
           printf("%d, ", d);
           b = c;
           c = d;
        }
        printf("\b\b.");
    }
    return 0;
}

