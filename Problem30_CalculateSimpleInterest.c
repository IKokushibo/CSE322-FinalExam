#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    printf("Enter principal amount: \u20B1");
    scanf("%f", &principal);

    printf("How many percent per annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter how many years: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("The Simple Interest is: \u20B1%.2f\n", simpleInterest);

    return 0;
}

#include <stdio.h>


