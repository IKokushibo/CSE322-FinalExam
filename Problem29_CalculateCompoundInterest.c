#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;

    printf("Enter principal amount: \u20B1");
    scanf("%f", &principal);

    printf("How many percent per annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter how many years: ");
    scanf("%f", &time);

    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;

    printf("The Compound Interest is: \u20B1%.2f\n", compoundInterest);

    return 0;
}
