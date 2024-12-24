#include <stdio.h>
#include <stdlib.h>

// Функції для арифметичних операцій
double add(double a, double b) { return a + b; }

double subtract(double a, double b) { return a - b; }

double multiply(double a, double b) { return a * b; }

double divide(double a, double b) {
  if (b != 0) {
    return a / b;
  } else {
    printf("Error: Division by zero.\n");
    exit(1);
  }
}

int main() {
  double a, b;
  char operator;

  // Масив вказівників на функції
  double (*operations[4])(double, double) = {add, subtract, multiply, divide};

  // Зчитуємо арифметичний вираз
  printf("Enter an arithmetic expression (e.g. 1.28+3.14): ");
  if (scanf("%lf%c%lf", &a, &operator, & b) != 3) {
    printf("Invalid input.\n");
    return 1;
  }

  // Виконуємо операцію в залежності від введеного оператора
  double result;
  switch (operator) {
  case '+':
    result = operations[0](a, b); // Додавання
    break;
  case '-':
    result = operations[1](a, b); // Віднімання
    break;
  case '*':
    result = operations[2](a, b); // Множення
    break;
  case '/':
    result = operations[3](a, b); // Ділення
    break;
  default:
    printf("Invalid operator.\n");
    return 1;
  }

  // Виводимо результат
  printf("Result: %.2lf\n", result);
  return 0;
}



