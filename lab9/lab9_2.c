#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PARTICIPANTS 100
#define MAX_LENGTH 100

typedef struct {
    int number;
    char surname[MAX_LENGTH];
    char name[MAX_LENGTH];
} Participant;

int compare(const void *a, const void *b) {
    Participant *p1 = (Participant *)a;
    Participant *p2 = (Participant *)b;
    return strcmp(p1->name, p2->name);
}

int main() {
    Participant participants[MAX_PARTICIPANTS];
    char input[MAX_LENGTH];
    int count = 0;
    int nameCount = 0;
    char names[MAX_PARTICIPANTS][MAX_LENGTH];
    int totalSurnameLength = 0;

    printf("Введіть список учасників у форматі 'Номер - Прізвище - Ім'я' (10+ учасників, введіть 'стоп' для завершення):\n");

    while (count < MAX_PARTICIPANTS) {
        fgets(input, MAX_LENGTH, stdin);
        if (strncmp(input, "стоп", 4) == 0) {
            break;
        }
        sscanf(input, "%d - %s - %s", &participants[count].number, participants[count].surname, participants[count].name);
        totalSurnameLength += strlen(participants[count].surname);

        // Додаємо ім'я до списку, якщо його ще немає
        int unique = 1;
        for (int i = 0; i < nameCount; i++) {
            if (strcmp(names[i], participants[count].name) == 0) {
                unique = 0;
                break;
            }
        }
        if (unique) {
            strcpy(names[nameCount++], participants[count].name);
        }
        count++;
    }

    double averageSurnameLength = (double)totalSurnameLength / count;

    printf("\nКількість відмінних імен: %d\n", nameCount);
    printf("Середня довжина прізвищ: %.2f\n", averageSurnameLength);

    qsort(participants, count, sizeof(Participant), compare);

    printf("\nСписок учасників в алфавітному порядку:\n");
    for (int i = 0; i < count; i++) {
        printf("%d - %s - %s\n", participants[i].number, participants[i].name, participants[i].surname);
    }

    return 0;
}
