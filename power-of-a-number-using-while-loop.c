#include <stdio.h>

// Using while loop for getting power of a number.

int main() {
    int base, exp;
    long result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %ld", result);
    return 0;
}
