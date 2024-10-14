#include <stdio.h>
#include <stdlib.h>

typedef double (*Operation)(double, double);

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
    if (b != 0) {
        return a / b;
    }
    printf("Помилка: ділення на нуль\n");
    exit(EXIT_FAILURE);
}

int main() {
    Operation operations[4] = {add, subtract, multiply, divide};
    char operator;
    double operand1, operand2;
    char input[50];

    printf("Введіть вираз (наприклад, 1.28+3.14): ");
    fgets(input, sizeof(input), stdin);

    if (sscanf(input, "%lf %c %lf", &operand1, &operator, &operand2) != 3) {
        printf("Невірний формат вводу\n");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("Результат: %lf\n", operations[0](operand1, operand2));
            break;
        case '-':
            printf("Результат: %lf\n", operations[1](operand1, operand2));
            break;
        case '*':
            printf("Результат: %lf\n", operations[2](operand1, operand2));
            break;
        case '/':
            printf("Результат: %lf\n", operations[3](operand1, operand2));
            break;
        default:
            printf("Невідомий оператор\n");
            return 1;
    }

    return 0;
}
