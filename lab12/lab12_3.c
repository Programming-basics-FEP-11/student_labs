#include <stdio.h>
#include <stdlib.h>

void copyFile(const char *source, const char *destination) {
    FILE *srcFile = fopen(source, "rb");
    if (srcFile == NULL) {
        printf("Не вдалося відкрити файл %s.\n", source);
        return;
    }

    FILE *destFile = fopen(destination, "wb");
    if (destFile == NULL) {
        printf("Не вдалося створити файл %s.\n", destination);
        fclose(srcFile);
        return;
    }

    char buffer[4096];
    size_t bytesRead;

    while ((bytesRead = fread(buffer, 1, sizeof(buffer), srcFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destFile);
    }

    fclose(srcFile);
    fclose(destFile);
}

int main() {
    char sourceFile[256];
    char destFile[256];

    printf("Введіть шлях до файлу для копіювання (формат *.pdf або *.jpg): ");
    scanf("%s", sourceFile);

    printf("Введіть шлях для збереження копії файлу: ");
    scanf("%s", destFile);

    copyFile(sourceFile, destFile);
    printf("Файл успішно скопійовано.\n");

    return 0;
}
