#include "program.h" // Include the header file with function prototypes
#include <stdio.h>

int main() {
  int choice;

  do {
    printf("\nВиберіть програму для запуску:\n");
    printf("1. Введення рядків і запис у mfile.txt\n");
    printf("2. Читання і обробка файлу mfile.txt, запис у xfile.txt\n");
    printf("3. Копіювання файлів (*.pdf або *.jpg)\n");
    printf("0. Вихід\n");
    printf("Ваш вибір: ");
    scanf("%d", &choice);
    getchar(); // Очищення буфера після введення

    switch (choice) {
    case 1:
      program1();
      break;
    case 2:
      program2();
      break;
    case 3:
      program3();
      break;
    case 0:
      printf("Вихід з програми.\n");
      break;
    default:
      printf("Неправильний вибір, спробуйте ще раз.\n");
    }
  } while (choice != 0);

  return 0;
}
