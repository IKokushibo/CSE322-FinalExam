#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    
    printf("The GCD is: %d\n", a);
    return 0;
}
