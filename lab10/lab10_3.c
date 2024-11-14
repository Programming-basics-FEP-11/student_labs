#include <stdio.h>
#include <stdlib.h>

float add(float a, float b) {
    return a+b;
}

float subtract(float a, float b) {
    return a-b;
}

float multiply(float a, float b) {
    return a*b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    }
    printf("Помилка: ділення на нуль\n");
}
int main() {
    float a, b;
    char c;
    float (*func_ptrs[])(float a, float b) = {add, subtract, multiply, divide};
    printf("Введіть приклад: ");
    scanf("%f%c%f", &a, &c, &b);
    if (c == '+') {
        float res = func_ptrs[0](a, b);
        printf("%.3f", res);
    }
    if (c == '-') {
        float res = func_ptrs[1](a, b);
        printf("%.3f", res);
    }
    if (c == '*') {
        float res = func_ptrs[2](a, b);
        printf("%.3f", res);
    }
    if (c == '/') {
        float res = func_ptrs[3](a, b);
        printf("%.3f", res);
    }
    printf("Неправильний оператор. Введіть +, -, *, або /");
    return 0;
}