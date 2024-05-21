#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i;
    printf("Enter your desired string: ");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Your Reversed string value is: %s\n", rev);
    return 0;
}
