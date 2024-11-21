#include <stdio.h>
#include <stdlib.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) {
  if (b == 0) {
    printf("Error: division by zero!\n");
    return 0;
  }
  return a / b;
}

int main() {
  float (*operations[])(float, float) = {add, subtract, multiply, divide};
  char operators[] = {'+', '-', '*', '/'};

  float operand1, operand2;
  char operator;

  printf("Enter an expression (e.g., 1.28+3.14): ");
  scanf("%f%c%f", &operand1, &operator, & operand2);

  int operationIndex = -1;
  for (int i = 0; i < 4; i++) {
    if (operator== operators[i]) {
      operationIndex = i;
      break;
    }
  }

  if (operationIndex != -1) {
    float result = operations[operationIndex](operand1, operand2);
    if (!(operator== '/' && operand2 == 0)) {
      printf("Result: %.2f\n", result);
    }
  } else {
    printf("Invalid operator.\n");
  }

  return 0;
}
