#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 256

int main() {
    FILE *inputFile = fopen("mfile.txt", "r");
    if (inputFile == NULL) {
        printf("Не вдалося відкрити файл mfile.txt.\n");
        return 1;
    }

    char lines[MAX_LINES][MAX_LENGTH];
    int lineCount = 0;
    int totalCharacters = 0;

    while (fgets(lines[lineCount], sizeof(lines[lineCount]), inputFile) != NULL) {
        totalCharacters += strlen(lines[lineCount]);
        lineCount++;
    }
    fclose(inputFile);

    printf("Кількість стрічок: %d\n", lineCount);
    double averageLength = (lineCount > 0) ? (double)totalCharacters / lineCount : 0;
    printf("Середня кількість символів у стрічці: %.2f\n", averageLength);

    FILE *outputFile = fopen("xfile.txt", "w");
    if (outputFile == NULL) {
        printf("Не вдалося створити файл xfile.txt.\n");
        return 1;
    }

    for (int i = lineCount - 1; i >= 0; i--) {
        int len = strlen(lines[i]);
        for (int j = len - 1; j >= 0; j--) {
            fputc(lines[i][j], outputFile);
        }
    }
    fclose(outputFile);
    return 0;
}
