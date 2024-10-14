#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_WORDS 20

void reverseWord(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
}

int main() {
    char input[MAX_LEN];
    char *words[MAX_WORDS];
    int wordCount = 0;

    printf("Введіть прислів'я або афоризм (7+ слів): ");
    fgets(input, MAX_LEN, stdin);

    char *token = strtok(input, " \n");
    while (token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " \n");
    }

    for (int i = 0; i < wordCount; i++) {
        reverseWord(words[i]);
        printf("%s\n", words[i]);
    }

    return 0;
}
