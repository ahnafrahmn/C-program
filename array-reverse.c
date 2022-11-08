#include<stdio.h>

int main(){
    int a, c;
    printf("Enter the size of the array : ");
    scanf("%d", &a);
    int b[a];
    int rb[a];
    for(int i=0; i<a; i++){
        printf("Enter an element for %dth index : ", i+1);
        scanf("%d", &b[i]);
        c = a - i - 1;
        rb[c] = b[i];
    }
    printf("\nArray = {");
    for(int j=0; j<a; j++){
        printf(" %d,", b[j]);
    }
    printf("\b }");
    printf("\nReverse-Array = {");
    for(int k=0; k<a; k++){
        printf(" %d,", rb[k]);
    }
    printf("\b }");
    return 0;
}
