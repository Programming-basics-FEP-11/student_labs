#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILES 100
#define MAX_FILENAME_LENGTH 256


void copyFile(const char *source, const char *destination);

// Перевірка, чи існує файл
int fileExists(const char *filename) {
  FILE *file = fopen(filename, "rb");
  if (file) {
    fclose(file);
    return 1; // Файл існує
  }
  return 0; // Файл не існує
}

// Завдання 2: Отримання рядків з консолі та запис у файл
void task2() {
  FILE *file = fopen("mfile.txt", "w");
  if (file == NULL) {
    perror("Не вдалося відкрити файл для запису");
    return;
  }

  printf("Введіть 10 стрічок (для завершення введіть порожній "
         "рядок):\n");
  char line[256];
  int count = 0;
  while (count < 10) {
    fgets(line, sizeof(line), stdin);
    if (strcmp(line, "\n") == 0) {
      printf("Мінімум 10 стрічок обов'язкові!\n");
      continue;
    }
    fputs(line, file);
    count++;
  }
  fclose(file);
  printf("Стрічки записані у файл mfile.txt\n");
}

// Завдання 3: Обробка файлу та запис у зворотному порядку
void task3() {
  FILE *inputFile = fopen("mfile.txt", "r");
  FILE *outputFile = fopen("xfile.txt", "w");
  if (inputFile == NULL || outputFile == NULL) {
    perror("Не вдалося відкрити файл");
    return;
  }

  char lines[20][256];
  int lineCount = 0;
  int totalChars = 0;

  printf("Вміст файлу mfile.txt:\n");
  while (fgets(lines[lineCount], sizeof(lines[lineCount]), inputFile) != NULL) {
    printf("%s", lines[lineCount]);
    size_t length = strlen(lines[lineCount]);
    if (lines[lineCount][length - 1] == '\n') {
      lines[lineCount][length - 1] = '\0'; 
      length--;
    }
    totalChars += length;
    lineCount++;
  }

  // Виведення статистики
  printf("\nКількість стрічок: %d\n", lineCount);
  printf("Середня кількість символів у стрічці: %.2f\n",
         (float)totalChars / lineCount);

  // Запис у зворотному порядку у xfile.txt
  for (int i = lineCount - 1; i >= 0; i--) {
    for (int j = strlen(lines[i]) - 1; j >= 0; j--) {
      fputc(lines[i][j], outputFile);
    }
    fputc('\n', outputFile);
  }

  fclose(inputFile);
  fclose(outputFile);
  printf("Результат записаний у файл xfile.txt\n");
}

// Завдання 4: Копіювання файлів типу *.pdf та *.jpg
void task4() {
  char files[MAX_FILES][MAX_FILENAME_LENGTH];
  int fileCount = 0;

  printf("Введіть імена файлів (з розширеннями .pdf або .jpg), які потрібно "
         "копіювати (для завершення введіть порожній рядок):\n");

  while (1) {
    char filename[MAX_FILENAME_LENGTH];
    fgets(filename, sizeof(filename), stdin);

    size_t len = strlen(filename);
    if (filename[len - 1] == '\n') {
      filename[len - 1] = '\0';
    }

    if (strcmp(filename, "") == 0) {
      break;
    }

    // Перевірка на допустимі розширення
    if (strstr(filename, ".pdf") || strstr(filename, ".jpg")) {
      strncpy(files[fileCount], filename, MAX_FILENAME_LENGTH);
      fileCount++;
    } else {
      printf("Файл не має розширення .pdf або .jpg. Спробуйте ще раз.\n");
    }
  }

  if (fileCount == 0) {
    printf("Не знайдено файлів для копіювання.\n");
    return;
  }

  // Копіювання файлів
  for (int i = 0; i < fileCount; i++) {
    if (fileExists(files[i])) {
      char dest[MAX_FILENAME_LENGTH];
      snprintf(dest, sizeof(dest), "copy_%s", files[i]);
      printf("Копіювання файлу %s у %s\n", files[i], dest);
      copyFile(files[i], dest);
    } else {
      printf("Помилка: файл %s не знайдено у директорії.\n", files[i]);
    }
  }
  printf("Операція копіювання завершена.\n");
}

// Функція копіювання файлу за допомогою fread() та fwrite()
void copyFile(const char *source, const char *destination) {
  FILE *src = fopen(source, "rb");
  FILE *dst = fopen(destination, "wb");
  if (src == NULL || dst == NULL) {
    perror("Помилка відкриття файлу");
    return;
  }

  char buffer[1024];
  size_t bytes;
  while ((bytes = fread(buffer, 1, sizeof(buffer), src)) > 0) {
    fwrite(buffer, 1, bytes, dst);
  }

  fclose(src);
  fclose(dst);
}

int main() {
  printf("Виконання завдань:\n");

  // Завдання 2
  task2();

  // Завдання 3
  task3();

  // Завдання 4
  task4();

  return 0;
}
