#include<stdio.h>
#include<math.h>

// ax^2 + bx + c = 0
// ==>  this program is for getting the value of 'x' .
// this program won't show the rooted or complex values of 'x' .

int main()
{
    int a, b, c;
    long positive_x, negative_x;
    printf("    ax^2 + bx + c = 0 \n");
    printf(" enter the value of a :  ");
    scanf("%d", &a);

    printf(" enter the value of b :  ");
    scanf("%d", &b);

    printf(" enter the value of c :  ");
    scanf("%d", &c);

    positive_x = (- b + pow((b*b - 4*a*c), 0.5)) / 2*a ;
    negative_x = (- b - pow((b*b - 4*a*c), 0.5)) / 2*a ;

    printf(" x1 = %d  ;  x2 = %d ", positive_x, negative_x);

    return 0;
}








//   printf("");
