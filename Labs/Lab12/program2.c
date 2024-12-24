#include "program.h" // Include the header file for function declarations
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 256

void program2() {
  FILE *input = fopen("mfile.txt", "r");
  if (!input) {
    perror("Не вдалося відкрити файл mfile.txt");
    return;
  }

  char *lines[MAX_LINES];
  int line_count = 0;
  size_t total_length = 0;

  // Читання рядків у пам'ять
  char buffer[MAX_LENGTH];
  while (fgets(buffer, sizeof(buffer), input)) {
    lines[line_count] = malloc(strlen(buffer) + 1);
    strcpy(lines[line_count], buffer);
    total_length += strlen(buffer);
    line_count++;
  }
  fclose(input);

  // Виведення інформації
  printf("Вміст файлу:\n");
  for (int i = 0; i < line_count; i++) {
    printf("%s", lines[i]);
  }
  printf("\nКількість рядків: %d\n", line_count);
  printf("Середня кількість символів у рядку: %.2f\n",
         (double)total_length / line_count);

  // Запис у зворотному порядку
  FILE *output = fopen("xfile.txt", "w");
  if (!output) {
    perror("Не вдалося відкрити файл xfile.txt");
    return;
  }

  for (int i = line_count - 1; i >= 0; i--) {
    for (int j = strlen(lines[i]) - 1; j >= 0; j--) {
      fputc(lines[i][j], output);
    }
  }

  fclose(output);
  for (int i = 0; i < line_count; i++) {
    free(lines[i]);
  }

  printf("Дані записані у файл xfile.txt у зворотному порядку.\n");
}
