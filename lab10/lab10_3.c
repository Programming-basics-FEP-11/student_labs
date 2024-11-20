#include <stdio.h>
#include <stdlib.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Помилка: ділення на нуль!\n");
        exit(1);
    }
    return a / b;
}

int main() {
    double (*operations[4])(double, double) = {add, subtract, multiply, divide};

    char input[50];
    printf("Введіть вираз (наприклад, 1.28+3.14): ");
    fgets(input, sizeof(input), stdin);

    double operand1, operand2;
    char operator;

    if (sscanf(input, "%lf%c%lf", &operand1, &operator, &operand2) != 3) {
        printf("Помилка вводу! Введіть коректний вираз.\n");
        return 1;
    }

    double result;
    switch (operator) {
        case '+': result = operations[0](operand1, operand2); break;
        case '-': result = operations[1](operand1, operand2); break;
        case '*': result = operations[2](operand1, operand2); break;
        case '/': result = operations[3](operand1, operand2); break;
        default:
            printf("Помилка: невідомий оператор '%c'\n", operator);
            return 1;
    }

    printf("Результат: %.2lf\n", result);

    return 0;
}
