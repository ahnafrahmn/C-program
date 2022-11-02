#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d", &a);
    c = a-1;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a-i; j++){
            printf("* ");
        }
        if(i==1){
            printf(" ");
        } else if(i>1){
            b = 2*i-2;
            printf("  ");
            for(int k=1; k<b; k++){
                printf("  ");
            }
            printf(" ");
        }
        for(int l=1; l<=a-i; l++){
            printf("* ");
        }
        printf("\n");
    }
    for(int p=1; p<=c; p++){
        for(int q=1; q<p; q++){
            printf("* ");
        }
        if(a==2){
            printf(" ");
        } else if(a>2){
            printf("* ");
            for(int r=1; r<=c-p; r++){
                printf("    ");
            }
            printf(" * ");
        }
        for(int s=1; s<p; s++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
