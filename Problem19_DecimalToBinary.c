#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimal);
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    printf("The Binary Value the Decimal number is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}
