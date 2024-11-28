#include <stdio.h>
#include <string.h>

int main() {
  FILE *inputFile = fopen("mfile.txt", "r");
  if (!inputFile) {
    perror("Помилка відкриття файлу");
    return 1;
  }

  char lines[100][256];
  int numLines = 0;
  int charCount = 0;

  while (fgets(lines[numLines], sizeof(lines[numLines]), inputFile)) {
    charCount += strlen(lines[numLines]) - 1;
    numLines++;
  }
  fclose(inputFile);

  printf("Вміст файлу 'mfile.txt':\n");
  for (int i = 0; i < numLines; i++) {
    printf("%s", lines[i]);
  }

  printf("\nКількість рядків: %d\n", numLines);
  printf("Середня довжина рядка: %.2f символів\n", (float)charCount / numLines);

  FILE *outputFile = fopen("xfile.txt", "w");
  if (!outputFile) {
    perror("Помилка створення файлу");
    return 1;
  }

  for (int i = numLines - 1; i >= 0; i--) {
    for (int j = strlen(lines[i]) - 1; j >= 0; j--) {
      if (lines[i][j] != '\n') {
        fputc(lines[i][j], outputFile);
      }
    }
    fputc('\n', outputFile);
  }
  fclose(outputFile);

  printf("Зворотний вміст збережено у файл 'xfile.txt'.\n");
  return 0;
}
