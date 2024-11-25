#include <stdio.h>
#include <string.h>

int main() {
    FILE *file, *reverse_file;
    char line[256];
    int line_count = 0, total_chars = 0;
    int i, j;

    file = fopen("mfile.txt", "r");
    if (file == NULL) {
        printf("Не вдалося відкрити файл для зчитування.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        line_count++;
        total_chars += strlen(line);
    }
    fclose(file);

    printf("Кількість рядків: %d\n", line_count);
    if (line_count > 0) {
        printf("Середня кількість символів у рядку: %.2f\n", (float)total_chars / line_count);
    }

    file = fopen("mfile.txt", "r");
    reverse_file = fopen("xfile.txt", "w");
    if (reverse_file == NULL) {
        printf("Не вдалося відкрити файл для запису.\n");
        return 1;
    }
    
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    for (i = file_size - 1; i >= 0; i--) {
        fseek(file, i, SEEK_SET);
        char c = fgetc(file);
        fputc(c, reverse_file);
    }

    fclose(file);
    fclose(reverse_file);
    printf("Вміст файлу записано в зворотному порядку у файл xfile.txt\n");

    return 0;
}
