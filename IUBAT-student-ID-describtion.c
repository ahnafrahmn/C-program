#include<stdio.h>

//  IUBAT student ID number describing program                                    222 03 203

int main()
{
    int id, last2digits, remainder1, remainder2, year, sem, dept_code, sl;
    printf(" Enter your ID number: ");
    scanf("%d", &id);

    last2digits = id / 1000000;
    remainder1 = id % 1000000;
    sem = remainder1 / 100000;
    remainder2 = id % 100000;
    dept_code = remainder2 / 1000;
    sl = id % 1000;

    if (id < 100000000 && id >= 10000000) {
        printf("\n\n Your ID is : %d\n", id);
        printf(" Admission year : 20%d\n", last2digits);

        if (sem == 1){
            printf(" Semester : Spring");
        } else if (sem == 2){
            printf(" Semester : Summer");
        } else if (sem == 3){
            printf(" Semester : Fall");
        } else {
             printf(" Enter a valid ID \n");
        }
        printf("\n Department code : %02d\n", dept_code);
        printf(" Unique serial no. : %d\n", sl);
    } else {
        printf(" Enter a valid ID \n");
    }
    return 0;
}
