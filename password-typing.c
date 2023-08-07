#include<stdio.h>
void main(){
    int i=0;
    char password[25], c;
    printf("\n\n Enter password (less than 25 characters): ");
    c = getch();              // hiding the password !!
    printf("%c", c);
    password[i] = c;
    i++;
    while(c != 13){
        usleep(385000);
        printf("\b*");
        c = getch();
        while(c == 8){
            printf("\b \b");
            i--;
            c = getch();
        }
        printf("%c", c);
        password[i] = c;
        i++;
    }
    password[i] = '\0';       // The process ends here!!
    printf("\n\n Your password is : %s \n\n", password);
}
