#include<stdio.h>

int main(){
    int a, temp, min;
    printf("Enter the size of the array \n: ");
    scanf("%d", &a);
    int b[a];
    for(int i=0; i<a; i++){
        printf("Enter an element for %dth index : ", i+1);
        scanf("%d", &b[i]);
    }
    printf("\nArray = {");
    for(int l=0; l<a; l++){
        printf(" %d,", b[l]);
    }
    printf("\b }\n");


    for(int j=0; j<a; j++){
        for(int k=j+1; k<a; k++){
            if(b[j]>b[k]){
                temp=b[j];
                b[j]=b[k];
                b[k]=temp;
            }
        }
    }


    printf("\nSorted-Array = {");
    for(int m=0; m<a; m++){
        printf(" %d,", b[m]);
    }
    printf("\b }\n");
    return 0;
}
