#include <stdio.h>
#include "program.h" // Include the header file for function declarations

void program1() {
    FILE *file = fopen("mfile.txt", "w");
    if (!file) {
        perror("Не вдалося відкрити файл");
        return;
    }

    char buffer[256];
    printf("Введіть 10+ рядків (введіть порожній рядок для завершення вводу):\n");

    int line_count = 0;
    while (fgets(buffer, sizeof(buffer), stdin)) {
        if (buffer[0] == '\n') break; // Порожній рядок завершує введення
        fputs(buffer, file);
        line_count++;
    }

    fclose(file);
    printf("Успішно записано %d рядків у файл mfile.txt\n", line_count);
}
