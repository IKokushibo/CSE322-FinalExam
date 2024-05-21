#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter your desired word: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (isalpha(ch)) {
            consonants++;
        }
    }
    printf("Number of Vowels: %d\n", vowels);
    printf("Number of Consonants: %d\n", consonants);
    return 0;
}
