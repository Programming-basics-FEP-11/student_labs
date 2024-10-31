#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int is_vowel(char c) {
    c = tolower((unsigned char)c);  
    return (c == 'a' || c == 'o' || c == 'y' || c == 'o' || c == 'u' || c == 'e'      || c == 'i' || c == 'u');
}

int is_consonant(char c) {
    c = tolower((unsigned char)c);  
    return (c >= 'b' && c <= 'z' && !is_vowel(c));
}

int main() {
    setlocale(LC_ALL, ""); 
    char sentence[256];
    int vowel_count = 0, consonant_count = 0;

    printf("Введіть речення: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (is_vowel(sentence[i])) {
            vowel_count++;
        } else if (is_consonant(sentence[i])) {
            consonant_count++;
        }
    }

    printf("Кількість голосних: %d\n", vowel_count);
    printf("Кількість приголосних: %d\n", consonant_count);

    return 0;
}
