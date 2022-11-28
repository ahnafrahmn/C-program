#include<stdio.h>
#include<math.h>

// ax^2 + bx + c = 0
// ==>  this program is for getting the value of 'x' .
// this program won't show the rooted or complex values of 'x' .

int main()
{
    float a, b, c, positive_x, negative_x;
    printf("    ax^2 + bx + c = 0 \n");
    printf(" enter the value of a :  ");
    scanf("%f", &a);

    printf(" enter the value of b :  ");
    scanf("%f", &b);

    printf(" enter the value of c :  ");
    scanf("%f", &c);

    positive_x = (- b + sqrt((b*b - 4*a*c)))/(2*a) ;
    negative_x = (- b - sqrt((pow(b,2) - 4*a*c)))/(2*a) ;

    printf(" x1 = %.2f  ;  x2 = %.2f \n", positive_x, negative_x);

    return 0;
}
