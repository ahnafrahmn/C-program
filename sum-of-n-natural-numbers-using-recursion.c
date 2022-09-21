#include<stdio.h>

// C program to sum 'n' number of natural numbers using recursion


int sum_N(int n){
    if (n == 1){
        return 1;
    }
    int a = sum_N(n-1);
    int sumN = a + n;
    return sumN;
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Sum of natural number %d is : %d", a, sum_N(a));
    return 0;
}
