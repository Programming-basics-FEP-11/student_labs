#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *str1, char *str2);
void swapd(int *d1, int *d2);

int main() {
    int studCount;
    printf("\nВведіть кількість студентів:\n");
    scanf("%d", &studCount);

    // Перевірка мінімальної кількості студентів
    if (studCount < 10) {
        printf("Кількість має бути не менше 10\n");
        return 0;
    }

    int numm[studCount];
    char name[studCount][50];
    char surname[studCount][50];

    // Введення даних студентів
    printf("\nВведіть список групи (англійською) у форматі:\n");
    printf("номер прізвище ім'я\n");
    for (int a = 0; a < studCount; a++) {
        scanf("%d%s%s", &numm[a], surname[a], name[a]);
    }

    // Пошук унікальних імен
    char diferentNames[studCount][50];
    strcpy(diferentNames[0], name[0]);
    int massEnd = 1;  // Кількість різних імен
    for (int a = 1; a < studCount; a++) {
        int compareResult = 0;
        for (int b = 0; b < massEnd; b++) {
            if (strcmp(name[a], diferentNames[b]) == 0) {
                compareResult = 1;  // Якщо ім'я вже є в масиві
                break;
            }
        }
        if (compareResult == 0) {
            strcpy(diferentNames[massEnd], name[a]);  // Додаємо нове ім'я
            massEnd++;
        }
    }
    printf("\nКількість різних імен = %d\n", massEnd);

    // Обчислення середньої довжини прізвищ
    int summ = 0;
    for (int a = 0; a < studCount; a++) {
        summ += strlen(surname[a]);
    }
    int middle = summ / studCount;
    printf("Середня довжина прізвищ = %d\n", middle);

    // Сортування за прізвищем
    for (int a = 0; a < studCount - 1; a++) {
        for (int b = 0; b < studCount - 1; b++) {
            if (strcmp(surname[b], surname[b + 1]) > 0) {
                swap(surname[b], surname[b + 1]); // Міняємо прізвища
                swap(name[b], name[b + 1]);       // Міняємо імена
                swapd(&numm[b], &numm[b + 1]);    // Міняємо номери
            }
        }
    }

    // Виведення відсортованих даних
    for (int a = 0; a < studCount; a++) {
        printf("%d %s %s\n", numm[a], name[a], surname[a]);
    }

    return 0;
}

// Функція для обміну рядків
void swap(char *str1, char *str2) {
    char trash[50];
    strcpy(trash, str1);
    strcpy(str1, str2);
    strcpy(str2, trash);
}

// Функція для обміну цілих чисел
void swapd(int *d1, int *d2) {
    int trash = *d1;
    *d1 = *d2;
    *d2 = trash;
}
