#include <stdio.h>

int main() {
    char sentence[1000];
    int vowels = 0, consonants = 0;
    char ch;

   
    printf("Введіть речення: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    for (int i = 0; sentence[i] != '\0'; i++) {
        ch = sentence[i];

        
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    
    printf("Кількість голосних: %d\n", vowels);
    printf("Кількість приголосних: %d\n", consonants);

    return 0;
}