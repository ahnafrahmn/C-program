#include <stdio.h>

int bonus = 0;
int hrs =0;
int monthly_salary = 0;
int hourly_salary = 120;
int total_salary = 0;
int working_days = 22;

void officer(){
    int ans1, monthly_salary = 42000;
    ans:
    printf(" Is there any festival in this month ? \n 1) Yes \t 2) No \n : ");
    scanf("%d", &ans1);
    if(ans1==1){
        bonus = 10000;
        total_salary = monthly_salary + bonus;
    } else if(ans1==2){
        total_salary = monthly_salary + bonus ;
    } else{
        printf(" Enter a valid input \n\n");
        goto ans;
    }
    report(1, monthly_salary);
}

void worker(){
    int ans1;
    printf(" How many hours you have worked per day? \n : ");
    scanf("%d", &hrs);
    monthly_salary = working_days * hourly_salary * hrs;
    ans:
    printf(" Is there any festival in this month ? \n 1) Yes \t 2) No \n : ");
    scanf("%d", &ans1);
    if(ans1==1){
        bonus = 2000;
        total_salary = monthly_salary + bonus;
    } else if(ans1==2){
        total_salary = monthly_salary + bonus ;
    } else{
        printf(" Enter a valid input \n\n");
        goto ans;
    }

    report(2, monthly_salary);
}

void report(int a, int b){
    printf("\n\n-----------------------------------------------------------------------------------------\n\n");
    switch(a){
        case 1:
            printf(" You are an officer and your salary report is given below : \n ");
            break;
        case 2:
            printf(" You are a worker. Your hourly salary is %d and you have worked %d hours in a day .\n", hourly_salary, hrs);
            printf(" Your daily salary is %d Your salary report is given below : \n ", hourly_salary*hrs);
            break;
    }
    printf("\n Working days \t : \t %d \n", working_days);
    printf(" Monthly Salary  : \t %d BDT\n", b);
    printf(" Bonus \t\t : \t %d BDT\n", bonus);
    printf(" Total Salary \t : \t %d BDT\n", total_salary);
    printf("\n\n-----------------------------------------------------------------------------------------\n\n");
}

void main(){
    int pos;
    printf("\n \t\t\t Salary Generator \t\t\t\n");
    printf(" \t\t\t ---------------- \t\t\t\n\n");
    select:
    printf(" Select your position : \n 1) Officer \t 2) Worker \n : ");
    scanf("%d", &pos);
    if(pos==1){
        officer();
    } else if(pos==2){
        worker();
    } else {
        printf(" Enter a valid input \n\n");
        goto select;
    }

}
