#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[length] != '\0') {
        length++;
    }
    printf("The Length of the string is: %d\n", length);
    return 0;
}
