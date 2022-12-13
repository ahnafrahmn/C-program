#include <stdio.h>
#include <math.h>

int digits;


int binary(int a){
    int arr[digits];
    int i, temp, j, bi=0;
    temp = a;
    for((i=digits-1); i>=0; i--){
        arr[i] = temp % 2;
        temp /= 2;
    }
    for(i=0, j=digits-1; i<digits, j>=0; i++, j--){
        bi += arr[i] * pow(10, j);
    }
    return bi;
}

void main(){
    int deci, temp, ask, count=0;
    printf("\n\t\t\t  Decimal ==>> Binary \t\t\t\n");
    printf("\t\t\t --------------------- \t\t\t\n\n");
    start:
    printf("\n Enter a decimal number to convert into binary : ");
    scanf("%d", &deci);
    temp = deci;
    while(temp != 0){
        temp /= 2;
        count++;
    }
    digits = count;
    printf("\n Decimal : %d \n", deci);
    printf("\n Binary : %d \n", binary(deci));
    ques:
    printf("\n (1) Convert again \t (2) Exit \n : ");
    scanf("%d", &ask);
    switch(ask){
        case 1:
            goto start;
            break;
        case 2:
            printf(" \n\t\t Thank you ! \n\n");
            break;
        default:
            printf("\n Invalid Input \n\n");
            goto ques;
    }
}
