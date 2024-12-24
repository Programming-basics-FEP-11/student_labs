#include <stdio.h>
#include <stdlib.h>

// Функція для виділення пам'яті для двох цілих чисел і запису координат
int *toPoint(int x, int y) {
  // Виділяємо пам'ять для двох цілих чисел
  int *point = (int *)malloc(2 * sizeof(int));

  // Перевірка на успішне виділення пам'яті
  if (point == NULL) {
    printf("Memory allocation failed.\n");
    exit(1); // Завершуємо програму, якщо пам'ять не виділилася
  }

  // Записуємо координати
  point[0] = x;
  point[1] = y;

  // Повертаємо вказівник на пам'ять
  return point;
}

int main() {
  int x = 5, y = 10;

  // Викликаємо функцію для створення точки
  int *point = toPoint(x, y);

  // Виводимо координати точки та вказівник на неї
  printf("Point coordinates: (%d, %d)\n", point[0], point[1]);
  printf("Pointer address: %p\n", (void *)point);

  // Звільняємо пам'ять
  free(point);

  return 0;
}
