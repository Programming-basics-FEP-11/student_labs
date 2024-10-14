#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Необхідно для використання функції strlen

int main(void) {

    FILE *pFile; // Вказівник на файл
    char strings[20][256]; // Масив для зберігання рядків
    int n = 0; // Лічильник рядків

    // Відкриття файлу для читання
    pFile = fopen("mfile.txt", "r");
    if (pFile == NULL) {
        perror("Failed to open file"); // Перевірка на успішне відкриття
        return 1; // Завершення програми у випадку помилки
    }

    // Читання рядків з файлу
    while (n < 20 && fscanf(pFile, "%255s", strings[n]) == 1) {
        n++; // Збільшення лічильника рядків
    }
    fclose(pFile); // Закриття файлу

    // Виведення прочитаних рядків
    for (int j = 0; j < n; j++) {
        printf("%s\n", strings[j]);
    }

    printf("Number of lines: %d\n", n);

    // Обчислення середньої довжини рядків
    int summ = 0; // Сума довжин рядків
    for (int j = 0; j < n; j++) {
        summ += strlen(strings[j]); // Сумування довжин рядків
    }
    int half = summ / n; // Середня довжина
    printf("Average number of characters per line: %d\n", half);

    // Відкриття файлу для запису
    pFile = fopen("xfile.txt", "w");
    if (pFile == NULL) {
        perror("Could not open file for writing");
        return 1; // Завершення програми у випадку помилки
    }

    // Запис рядків у зворотному порядку
    for (int i = n - 1; i >= 0; i--) {
        char tmp[256]; // Тимчасовий масив для зворотного запису рядка
        int sLen = strlen(strings[i]); // Довжина рядка

        // Зворотне копіювання рядка
        for (int j = 0; j < sLen; j++) {
            tmp[j] = strings[i][sLen - j - 1];
        }
        tmp[sLen] = '\0'; // Завершення рядка

        fprintf(pFile, "%s\n", tmp); // Запис рядка у файл
    }
    fclose(pFile); // Закриття файлу
    return 0; // Успішне завершення програми
}
