#include <stdio.h>

int main() {
    FILE *file;
    char line[256];

    file = fopen("mfile.txt", "w");
    if (file == NULL) {
        printf("Не вдалося відкрити файл для запису.\n");
        return 1;
    }

    printf("Введіть рядки. Для завершення Enter, нічого не написавши:\n");

    while (fgets(line, sizeof(line), stdin)) {
        // Якщо введено порожній рядок, завершити ввід
        if (line[0] == '\n') {
            break;
        }
        fprintf(file, "%s", line);
    }

    fclose(file);
    printf("Рядки записані у файл mfile.txt\n");
    return 0;
}
