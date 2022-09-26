#include <stdio.h>
#include <math.h>
#define Pi 3.14

double rad2deg(double n){
    double degVal;
    degVal = n*Pi/180;
    return degVal;
}


int main()
{
    double a, b, c, n;
    printf("Enter (1) for sin()\nEnter (2) for cos()\nEnter (3) for tan()\n");
    printf("Enter (4) for cosec()\nEnter (5) for sec()\nEnter (6) for cot()\n");
    scanf("%lf", &a);
    if (a==1){
        printf("Enter a value for sin() : ");
        scanf("%lf", &b);
        printf("sin(%.2lf) = %.2lf\n", b, sin(rad2deg(b)));
    } else if (a==2){
        printf("Enter a value for cos() : ");
        scanf("%lf", &b);
        printf("cos(%.2lf) = %.2lf\n", b, cos(rad2deg(b)));
    } else if (a==3){
        printf("Enter a value for tan() : ");
        scanf("%lf", &b);
        printf("tan(%.2lf) = %.2lf\n", b, tan(rad2deg(b)));
    } else if (a==4){
        printf("Enter a value for cosec() : ");
        scanf("%lf", &b);
        printf("cosec(%.2lf) = %.2lf\n", b, 1/(sin(rad2deg(b))));
    } else if (a==5){
        printf("Enter a value for sec() : ");
        scanf("%lf", &b);
        printf("sec(%.2lf) = %.2lf\n", b, 1/(cos(rad2deg(b))));
    } else if (a==6){
        printf("Enter a value for cot() : ");
        scanf("%lf", &b);
        printf("cot(%.2lf) = %.2lf\n", b, 1/(tan(rad2deg(b))));
    }
    return 0;
}
