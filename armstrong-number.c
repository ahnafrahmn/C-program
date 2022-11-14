#include<stdio.h>
#include<math.h>

// Checking if an input is Armstrong number or not.

int main() {
    int num, mainNum, remainder, n = 0;
    float result = 0.0;
    printf("Enter a number: ");
    scanf("%d", &num);

    mainNum = num;

    for (mainNum = num; mainNum != 0; ++n) {
        mainNum /= 10;
    }
    for (mainNum = num; mainNum != 0; mainNum /= 10) {
        remainder = mainNum % 10;

        result += pow(remainder, n);
    }

    if ((int)result == num) {
        printf("%d is an Armstrong number.", num);
    } else {
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}
