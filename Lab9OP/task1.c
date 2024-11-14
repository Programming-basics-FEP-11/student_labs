#include <stdio.h>
#include <string.h>

int countWords(const char *string) {
    int count = 0;
    const char *ptr = string;
    while (*ptr) {
        if (*ptr == ' ' || *ptr == '\n')
            count++;
        ptr++;
    }
    return count;
}

void reverseAndPrintWord(const char *word) {
    for (int i = strlen(word) - 1; i >= 0; --i) {
        printf("%c", word[i]);
    }
    printf("\n");
}

int main(void) {
    char string[100];
    printf("Enter a proverb or aphorism with at least 7 words in English: ");
    fgets(string, sizeof(string), stdin);

    if (countWords(string) < 7) {
        printf("The sentence must contain at least 7 words.\n");
        return 0;
    }

    printf("Reversed words:\n");
    char *word = strtok(string, " \n");
    while (word != NULL) {
        reverseAndPrintWord(word);
        word = strtok(NULL, " \n");
    }

    return 0;
}
