#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    const int BUF_SIZE = 256; // Розмір буфера для копіювання
    FILE *pSrc, *pDest; // Вказівники на джерело та файл призначення
    const char fnSrc[] = "photo.jpg"; // Ім'я джерела
    const char fnDest[] = "newphoto.jpg"; // Ім'я файлу призначення

    // Відкриття файлу джерела для читання
    pSrc = fopen(fnSrc, "rb");
    if (pSrc == NULL) {
        printf("Помилка відкриття файлу\n");
        perror(fnSrc); // Виведення помилки
        return 1; // Завершення програми
    }

    // Відкриття файлу призначення для запису
    pDest = fopen(fnDest, "wb");
    if (pDest == NULL) {
        printf("Помилка відкриття файлу\n");
        perror(fnDest); // Виведення помилки
        fclose(pSrc); // Закриття файлу джерела
        return 2; // Завершення програми
    }

    char rec[BUF_SIZE]; // Буфер для зберігання даних
    size_t bytes_in; // Кількість байтів, що прочитані з джерела
    size_t bytes_out; // Кількість байтів, що записані в призначення

    // Цикл для копіювання даних
    while ((bytes_in = fread(rec, 1, BUF_SIZE, pSrc)) > 0) {
        bytes_out = fwrite(rec, 1, bytes_in, pDest); // Запис даних у файл призначення
        if (bytes_out != bytes_in) {
            perror("Помилка запису файлу."); // Виведення помилки
            fclose(pDest); // Закриття файлу призначення
            fclose(pSrc); // Закриття файлу джерела
            return 3; // Завершення програми
        }
    }

    printf("\nФайл скопійовано успішно.\n"); // Підтвердження успішного копіювання
    fclose(pDest); // Закриття файлу призначення
    fclose(pSrc); // Закриття файлу джерела
    return 0; // Успішне завершення програми
}
