#include <stdio.h>

// Функція для обчислення довжини стрічки
int string_length(const char *str) {
  int length = 0;
  while (str[length] != '\0') {
    length++;
  }
  return length;
}

int main() {
  char string[256]; // Буфер для введення стрічки, розміром до 256 символів

  printf("Enter a string: ");
  fgets(string, sizeof(string), stdin); // Зчитування стрічки з консолі

  // Видалення символу нового рядка '\n', якщо він є
  int len = string_length(string);
  if (string[len - 1] == '\n') {
    string[len - 1] = '\0';
  }

  printf("The length of the string is: %d\n", string_length(string));
  return 0;
}
