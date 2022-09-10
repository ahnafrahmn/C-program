#include<stdio.h>
#include<math.h>

// Calculating power of a number.

int main()
{
    double baseNumber, power, result;
    printf("enter a base number: ");
    scanf("%lf", &baseNumber);
    printf("enter the power: ");
    scanf("%lf", &power);

    result = pow(baseNumber, power);

    printf("(%lf)^(%lf) = (%lf)", baseNumber, power, result);
    return 0;
}
