#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; ++i) {
        factorial *= i;
    }
    printf("The Factorial of %d is = %llu\n", num, factorial);
    return 0;
}
