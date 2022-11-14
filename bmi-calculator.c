#include<stdio.h>
#include<math.h>

//  this program is for calculating BMI ( Body Mass Index )


int main()
{
    int weight;
    float bmi, height;

    printf(" This is a BMI calculator \n ");

    printf(" Enter your weight (in kg) :  ");
    scanf("%d", &weight);

    printf(" Enter your height (in cm) :  ");
    scanf("%f", &height);


    bmi = weight / (pow((height / 100), 2));

    printf("\n Your BMI is : %f \n\n", bmi);

    if ( bmi <= 18.40 ) {
        printf(" You are underweight. A healthy BMI range for adults is 18.5 to 24.9.\n\n");
    } else if ( bmi >= 18.50 && bmi <= 24.90 ) {
        printf(" CONGRATULATIONS !!  Your BMI is perfect.\n\n");
    } else if ( bmi >= 25.00 && bmi <= 39.90 ) {
        printf(" Your BMI is considered overweight for an adult at this height.\n A healthy BMI range for adults is 18.5 to 24.9.\n\n");
    } else if ( bmi >= 40.00 ) {
        printf(" Unfortunately your BMI is too high. please contact doctor and have some suggestions. \n A healthy BMI range for adults is 18.5 to 24.9.\n\n");
    }
    return 0;
}












