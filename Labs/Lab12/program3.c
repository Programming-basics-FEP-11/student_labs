#include "program.h" // Include the header file for function declarations
#include <stdio.h>
#include <stdlib.h>

void program3() {
  char source[256], destination[256];

  printf("Введіть ім'я вихідного файлу (*.pdf або *.jpg): ");
  scanf("%s", source);

  printf("Введіть ім'я цільового файлу: ");
  scanf("%s", destination);

  FILE *src = fopen(source, "rb");
  if (!src) {
    perror("Не вдалося відкрити вихідний файл");
    return;
  }

  FILE *dst = fopen(destination, "wb");
  if (!dst) {
    perror("Не вдалося створити цільовий файл");
    fclose(src);
    return;
  }

  char buffer[4096];
  size_t bytes;
  while ((bytes = fread(buffer, 1, sizeof(buffer), src)) > 0) {
    fwrite(buffer, 1, bytes, dst);
  }

  fclose(src);
  fclose(dst);
  printf("Файл '%s' скопійовано у '%s'\n", source, destination);
}
