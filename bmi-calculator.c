#include<stdio.h>
#include<math.h>

//  this program is for calculating BMI ( Body Mass Index )


int main()
{
    int a, bp1, bp2, pulse, age;
    float bmi, height, weight;

    printf("\n\t------------ This is a BMI calculator ------------\n\n ");
    start:
    printf("Choose the age range :\n 1)Newborn \n 2)Age is less than 1 year \n 3)Age is more than or equal 1 year \n : ");
    scanf("%d", &a);
    if(a==1){
        age=0;
    } else if(a==2){
        printf(" Enter age (in months) :  ");
        scanf("%d", &age);


    } else if(a==3){
        age:
        printf(" Enter your age (in years) :  ");
        scanf("%d", &age);
        if(age<1 || age>120){
            printf("Invalid age!!\n\n");
            goto age;
        }
    } else {
        printf("Invalid Input!!\n\n");
        goto start;
    }


    printf(" Enter your weight (in kg) :  ");
    scanf("%f", &weight);

    printf(" Enter your height (in cm) :  ");
    scanf("%f", &height);
    bloodp:
    printf("\n Enter your blood pressure (mmHg) both upper# and  lower# :  ");
    scanf("%d %d", &bp1, &bp2);
    printf("\n Enter your pulse rate / heart rate (BPM : beats per minute) :  ");
    scanf("%d", &pulse);


    bmi = weight / (pow((height / 100), 2));

    printf("\n_____________________________________________________________________\n");

    printf("\n\t\t:: REPORT ::\n\n Your BMI is : %.2f \n\n", bmi);

    if ( bmi <= 18.40 && bmi >=1) {
        printf(" You are underweight. A healthy BMI range for adults is 18.5 to 24.9.\n\n");
    } else if ( bmi >= 18.50 && bmi <= 24.90 ) {
        printf(" CONGRATULATIONS !!  Your BMI is perfect.\n\n");
    } else if ( bmi >= 25.00 && bmi <= 39.90 ) {
        printf(" Your BMI is considered overweight for an adult at this height.\n A healthy BMI range for adults is 18.5 to 24.9.\n\n");
    } else if ( bmi >= 40.00 && bmi <= 90) {
        printf(" Unfortunately your BMI is too high. please contact doctor and have some suggestions. \n A healthy BMI range for adults is 18.5 to 24.9.\n\n");
    } else {
        printf("Invalid Input!!\n\n");
        goto start;
    }
    if((a==1 && pulse>=100 && pulse<=160) || (a==2 && age>=0 && age<=5 && pulse>=90 && pulse<=150) ||
              (a==2 && age>=6 && age<=12 && pulse>=80 && pulse<=140) || (a==3 && age>=1 && age<=3 && pulse>=80 && pulse<=130) ||
              (a==3 && age>=3 && age<=5 && pulse>=80 && pulse<=120) || (a==3 && age>=6 && age<=10 && pulse>=70 && pulse<=100) ||
              (a==3 && age>=11 && age<=14 && pulse>=60 && pulse<=105) || (a==3 && age>=15 && age<=120 && pulse>=60 && pulse<=100)){

        printf(" Your heart rate is normal.\n");
    } else{
        printf(" Your heart rate is not normal.\n Go and see a DOCTOR as soon as possible!!\n");
    }

    if(bp1>0 && bp2>0){
        if(bp1<90 && bp2<60){
            printf(" Your blood pressure is LOW \n");
        } else if((bp1>=90 && bp1<130) || (bp2>=60 && bp2<90)){
            printf(" Your blood pressure is NORMAL \n");
        } else if(bp1>=130 || bp2>=90){
            printf(" Your blood pressure is HIGH \n");
        }
    } else {
        printf(" You have entered invalid blood pressure.\n Please enter again!\n");
        goto bloodp;
    }
    printf("\n_____________________________________________________________________\n");
    return 0;
}












