#include <stdio.h>

void main()
{
    int a, balance=50000, c, pin=1234, sample_pin;

    printf("\n\t\t<:: ATM ::> ");
    printf("\n\t\t-----------\n\n");
    printf(" Hello sir! \n");
    ques:
    printf("\n What do you want to do ? \n [1]Withdraw \t [2]Check Balance \t [3]Exit \n : ");
    scanf("%d", &a);
    switch(a){
    case 1:
        printf(" How much money do you want to withdraw ? \n : ");
        scanf("%d", &c);
        balance = balance - c;
        pass:
        printf(" Please enter your PIN number : ");
        scanf("%d", &sample_pin);
        if(pin==sample_pin){
            printf("\n\n Withdrawal successful! \n You have now %d BDT in your account.\n", balance);
            goto ques;
        } else{
            printf("\n You have entered wrong PIN \n");
            goto pass;
        }
        break;
    case 2:
        printf("\n You have now %d BDT in your account.\n", balance);
        goto ques;
        break;
    case 3:
        printf(" \t\t Thank you so much!!\n\n");
        break;
    default:
        printf(" Invalid Input \n");
        goto ques;
    }
}

