#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int vowels = 0, consonants = 0, i = 0;

    printf("Введіть речення: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        char ch = tolower(sentence[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Кількість голосних: %d\n", vowels);
    printf("Кількість приголосних: %d\n", consonants);

    return 0;
}
