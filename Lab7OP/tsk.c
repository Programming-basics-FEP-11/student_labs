#include <stdio.h>

// Перша програма: перевірка на просте число
int isprime(int num) {
  if (num <= 1)
    return 0;
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0)
      return 0;
  }
  return 1;
}

// Друга програма: рекурсивний підрахунок суми чисел
int sumRecursive(int num) {
  if (num > 100)
    return 0;
  return num + sumRecursive(num + 1);
}

// Третя програма: пошук кореня методом бісекції з перевіркою умов
double bisection(double N, double A) {
  if (N == 0) {
    if (A == 0) {
      printf("Розв'язків безліч.\n");
    } else {
      printf("Розв'язків немає.\n");
    }
    return 0;
  }

  double c, a = -100, b = 100;
  while ((b - a) >= 0.0001) {
    c = (a + b) / 2;
    if ((N * c + A) == 0)
      return c;

    if ((N * c + A) * (N * a + A) < 0)
      b = c;
    else
      a = c;
  }
  return c;
}

int main() {
  int choice;

  printf("Оберіть завдання:\n");
  printf("1. Перевірити, чи є число простим\n");
  printf("2. Обчислити суму чисел від порядкового номеру до 100\n");
  printf("3. Знайти корінь рівняння методом бісекції\n");
  printf("Ваш вибір: ");
  scanf("%d", &choice);

  if (choice == 1) {
    int num;
    printf("Введіть число: ");
    scanf("%d", &num);

    if (isprime(num)) {
      printf("%d є простим числом.\n", num);
    } else {
      printf("%d не є простим числом.\n", num);
    }
  } else if (choice == 2) {
    int start = 8;
    int result = sumRecursive(start);
    printf("Сума чисел від %d до 100: %d\n", start, result);
  } else if (choice == 3) {
    double N = 8, A = 17;
    printf("Порядковий номер (N): %.0lf, Вік (A): %.0lf\n", N, A);

    double root = bisection(N, A);
    if (N != 0) {
      printf("Корінь: %.4lf\n", root);
    }
  } else {
    printf("Неправильний вибір.\n");
  }

  return 0;
}
