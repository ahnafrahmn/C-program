#include <stdio.h>

float operands[50];
float result=0;
char operatorlist[5] = {'+', '-', 'x', '/', '='};
int chosen_op[50];
int size=0;

void calculator(){
    int i;
    printf("\n\t\t\t------------------------------------ \n");
    printf("\t\t\t <<+=:=:=:{  CALCULATOR  }:=:=:=+>> ");           // Always be on the top of the display!!
    printf("\n\t\t\t------------------------------------ \n\n ");
    for(i=0; i<size; i++){
        printf("%.2f ", operands[i]);
        if(chosen_op[i] != 5){
            printf("%c ", operatorlist[chosen_op[i]-1]);
        }
    }
    printf("\n\n");
}
void calc(){
    int i;
    for(i=0; i<size; i++){
        if(chosen_op[i]==2){
            operands[i+1] = operands[i+1]*(-1);
        }
        if((chosen_op[i]==3) || (chosen_op[i]==4)){         // if the 'i'th operator is (*) or (/) this will be true
            if(chosen_op[i]==3){
                operands[i+1] = operands[i]*operands[i+1];
            } else if(chosen_op[i]==4){
                operands[i+1] = operands[i]/operands[i+1];
            }
            operands[i]=0;
        }
    }
    for(i=0; i<size; i++){
        result += operands[i];
    }
    printf(" Result : %.2f \n\n", result);
}
int main(){
    int count=0, i=0, choice;
    calculator();

    printf(" Enter a number : ");
    scanf("%f", &operands[i]);
    size++;
    while(count==0){
        ask:
        printf("\n Choose an operator : \n (1)'+'\t(2)'-'\t(3)'x'\t(4)'/'\t(5)'='\n : ");
        scanf("%d", &chosen_op[i]);
        system("cls");                  // clearing the screen
        calculator();
        if(chosen_op[i]==5){
            calc();                     // time for calculation
            printf(" (1)Exit \t (2)Restart \n : ");
            scanf("%d", &choice);
            switch(choice){
            case 1:
                system("cls");
                printf("\n\n\t Thank you so much!! \n\n");
                return 0;
            case 2:
                system("cls");
                system("calculator.exe");
            }
        }
        i++;
        printf(" Enter a number : ");
        scanf("%f", &operands[i]);
        size++;
    }
}
