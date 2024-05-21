#include <stdio.h>

int main() {
    int a, b, max, lcm;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    max = (a > b) ? a : b;
    
    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }
    
    printf("The LCM is: %d\n", lcm);
    return 0;
}
