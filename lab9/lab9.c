#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void reverse_word(char* word) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
}

int validate_email(const char* email) {
    const char* at = strchr(email, '@');
    const char* dot = strrchr(email, '.');

    return at && dot && at < dot&& at != email && *(dot + 1) != '\0';
}

void task1_reverse_proverb() {
    char input[256];
    printf("Enter a proverb or aphorism with 7+ words: ");
    fgets(input, sizeof(input), stdin);

    char* word = strtok(input, " ");
    printf("\nReversed words:\n");
    while (word != NULL) {
        reverse_word(word);
        printf("%s ", word);
        word = strtok(NULL, " ");
    }
    printf("\n");
}

void task2_process_participants() {
    int numbers[100];
    char surnames[100][50];
    char names[100][50];
    char unique_names[100][50];
    int count = 0, unique_count = 0, total_length = 0;
    char buffer[100];

    printf("\nEnter participants in the format Number Surname Name (type 'end' to finish):\n");

    while (1) {
        fgets(buffer, sizeof(buffer), stdin);
        if (strncmp(buffer, "end", 3) == 0) break;

        sscanf(buffer, "%d %s %s", &numbers[count], surnames[count], names[count]);
        total_length += strlen(surnames[count]);
        count++;
    }

    for (int i = 0; i < count; i++) {
        int is_unique = 1;
        for (int j = 0; j < unique_count; j++) {
            if (strcmp(unique_names[j], names[i]) == 0) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            strcpy(unique_names[unique_count], names[i]);
            unique_count++;
        }
    }

    double avg_length = (double)total_length / count;

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(surnames[i], surnames[j]) > 0) {
                int temp_num = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp_num;

                char temp_surname[50];
                strcpy(temp_surname, surnames[i]);
                strcpy(surnames[i], surnames[j]);
                strcpy(surnames[j], temp_surname);

                char temp_name[50];
                strcpy(temp_name, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp_name);
            }
        }
    }

    printf("\nNumber of unique names: %d\n", unique_count);
    printf("Average surname length: %.2f\n", avg_length);
    printf("List in format Number-Name-Surname:\n");

    for (int i = 0; i < count; i++) {
        printf("%d %s %s\n", numbers[i], names[i], surnames[i]);
    }
}

void task3_validate_email() {
    char email[256];
    printf("\nEnter an email address: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = 0;

    if (validate_email(email)) {
        printf("Email address is valid.\n");
    }
    else {
        printf("Email address is invalid.\n");
    }
}

int main() {
    task1_reverse_proverb();
    task2_process_participants();
    task3_validate_email();

}
