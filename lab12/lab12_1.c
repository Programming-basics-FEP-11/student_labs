#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("mfile.txt", "w");
    if (file == NULL) {
        printf("Не вдалося відкрити файл.\n");
        return 1;
    }

    char line[256];
    for (int i = 0; i < 10; i++) {
        printf("Введіть стрічку %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }

    fclose(file);
    return 0;
}
