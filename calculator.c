#include<stdio.h>

int main(){
    int num1, num2, result, op;

    printf("Enter number : ");
    scanf("%d", &num1);
    start:
    printf("\n (1)+ (2)- (3)X (4)/ (5)=\n");
    scanf("%d", &op);
    if(op==1){
        printf("\nEnter number : ");
        scanf("%d", &num2);
        result = num1 + num2;
        num1 = result;
        goto start;
    } else if(op==2){
        printf("\nEnter number : ");
        scanf("%d", &num2);
        result = num1 - num2;
        num1 = result;
        goto start;
    } else if(op==3){
        printf("\nEnter number : ");
        scanf("%d", &num2);
        result = num1 * num2;
        num1 = result;
        goto start;
    } else if(op==4){
        printf("\nEnter number : ");
        scanf("%d", &num2);
        result = num1 / num2;
        num1 = result;
        goto start;
    } else if(op==5){
        printf("\nAnswer : %d", result);
    } else {
        printf("Invalid input\nPRESS : ");
        goto start;
    }
    return 0;
}

