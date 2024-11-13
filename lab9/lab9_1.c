#include <stdio.h>
#include <string.h>

#define MAX_WORDS 50
#define MAX_LENGTH 100
#define MIN_WORDS 7 

void reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char input[MAX_LENGTH];
    char words[MAX_WORDS][MAX_LENGTH];
    int word_count = 0;

    printf("Введіть прислів'я або афоризм :\n");
    fgets(input, MAX_LENGTH, stdin);

    char *token = strtok(input, " \n");
    while (token != NULL) {
        strcpy(words[word_count], token);
        word_count++;
        token = strtok(NULL, " \n");
    }

    if (word_count < MIN_WORDS) {
        printf("Помилка: потрібно ввести не менше %d слів.\n", MIN_WORDS);
        return 1;
    }

    printf("Слова зі зворотним порядком символів:\n");
    for (int i = 0; i < word_count; i++) {
        reverseString(words[i]);
        printf("%s\n", words[i]);
    }

    return 0;
}
