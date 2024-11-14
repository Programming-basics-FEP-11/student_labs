#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int number;
    char surname[50];
    char name[50];
} Person;

int comparePeople(const void *a, const void *b) {
    Person *personA = (Person *)a;
    Person *personB = (Person *)b;
    int nameComparison = strcmp(personA->name, personB->name);
    if (nameComparison == 0) {
        return strcmp(personA->surname, personB->surname);
    }
    return nameComparison;
}

int main() {
    setlocale(LC_ALL, "");

    int n;
    printf("Кількість учасників (10+): ");
    scanf("%d", &n);
    getchar();

    if (n < 10) {
        printf("Помилка: потрібно ввести принаймні 10 учасників.\n");
        return 1;
    }

    Person people[n];

    printf("Введіть учасників у форматі Номер Прізвище Ім'я, розділених комами:\n");
    for (int i = 0; i < n; i++) {
        printf("Учасник %d: ", i + 1);
        scanf("%d", &people[i].number);
        scanf("%49s", people[i].surname);
        scanf("%49s", people[i].name);
    }

    int uniqueNames = 0;
    int surnameLengthSum = 0;
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        surnameLengthSum += strlen(people[i].surname);
        for (int j = 0; j < i; j++) {
            if (strcmp(people[i].name, people[j].name) == 0) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) uniqueNames++;
    }
    double averageSurnameLength = (double)surnameLengthSum / n;

    printf("\nКількість унікальних імен: %d\n", uniqueNames);
    printf("Середня довжина прізвищ: %.2f\n", averageSurnameLength);

    qsort(people, n, sizeof(Person), comparePeople);

    printf("\nВідсортований список учасників:\n");
    for (int i = 0; i < n; i++) {
        printf("%d %s %s\n", people[i].number, people[i].name, people[i].surname);
    }

    return 0;
}
