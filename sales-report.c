#include<stdio.h>

char namelist[8][20] = {"Tea", "Coffee", "Cappuccino", "Hot Chocolate", "Fruit Juice", "Milk Shake", "Smoothie", "Fizzy Pop"};
float pricelist[8] = {20.00, 50.00, 100.00, 120.00, 80.00, 150.00, 110.00, 160.00};
int choicelist[25];
int qutylist[25];
int count=0;
int number;
int quty;
float price,amount,totalAmount;


void inventory(){
    int i;
    system("cls");

    printf("\n\n         \t      *** INVENTORY *** \n");
    printf("---------------------------------------------------------------------------------------\n");
    printf("\t NAME \t\t\t\t QUANTITY \t\t\t\t PRICE \t \n");
    printf("---------------------------------------------------------------------------------------\n");
    for(i=0; i<count; i++){
        if(namelist[choicelist[i]]==namelist[0] || namelist[choicelist[i]]==namelist[1]){
            printf("\n\t%s\t\t\t:\t\t%d\t\t\t\t%.2f\n",namelist[choicelist[i]],qutylist[i],pricelist[choicelist[i]]);
        } else{
            printf("\n\t%s\t\t:\t\t%d\t\t\t\t%.2f\n",namelist[choicelist[i]],qutylist[i],pricelist[choicelist[i]]);
        }

    }
    printf("---------------------------------------------------------------------------------------\n");
}
void main()
{
    int x, i;
    start:
    printf("\t\t\t==================\n");
    printf("\t\t\t=========  =========\n");
    printf("\t\t\t    Drinks Menu\n");
    printf("\t\t\t=========  =========\n\n");
    for(i=0; i<8; i++){
        if(i==0 || i==1){
            printf("\t\t [%d] %s   \t\t %.2f \n", i+1, namelist[i], pricelist[i]);
        }else{
            printf("\t\t [%d] %s   \t %.2f \n", i+1, namelist[i], pricelist[i]);
        }

    }


    printf("\n Enter what do you want\t: ");
    scanf(" %d", &number);
    printf("\n Enter Quantity\t: ");
    scanf("%d",&quty);
    choicelist[count] = number-1;
    qutylist[count] = quty;
    count++;

    amount=pricelist[number-1] * quty;
    totalAmount=totalAmount+amount;
    inventory();


    printf("\n\t\t\t\t\t\t\tTotal Amount\t=\t%.2f \n\n\n",totalAmount);
    printf("\n Add another: \n\n [1]Yes \t [2]No \n : ");
    scanf("%d", &x);
    if(x==1){
       system("cls");
       goto start;
    }
    system("cls");
    printf("\n\n\t\t Thank You \n\n\n");

}
