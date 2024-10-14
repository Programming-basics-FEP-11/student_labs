#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Оголошення функцій для арифметичних операцій
double plus(double x, double y) { return x + y; } 
double minus(double x, double y) { return x - y; } 
double mult(double x, double y) { return x * y; } 
double dev(double x, double y) { return x / y; }

// Масив вказівників на функції
double (*options[])(double x, double y) = { plus, minus, mult, dev };

int main(void) {
    printf("\nЛабораторна робота №10\n«ВКАЗІВНИКИ»\n");
    printf("Калькулятор\n");

    // Введення користувачем математичного виразу
    printf("\nВведіть вираз (наприклад, 5+3):\n");
    char str[256], *w1, *w2, sign;
    double x, y;

    fgets(str, sizeof(str), stdin); // Використовуємо fgets для безпечного введення

    // Перебір рядка для пошуку арифметичних операторів
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
            sign = str[i]; // Зберігаємо оператор
            str[i] = '\0'; // Заміна оператора на '\0', щоб розділити рядок на частини
            w1 = str; // Перша частина (ліве число)
            w2 = str + i + 1; // Друга частина (праве число)
            x = atof(w1); // Перетворюємо першу частину в число
            y = atof(w2); // Перетворюємо другу частину в число
            break;
        }
    }

    // Виведення результату на основі знаку
    printf("\nРезультат обчислення: ");
    if (sign == '+') printf("%f\n", options[0](x, y));
    else if (sign == '-') printf("%f\n", options[1](x, y));
    else if (sign == '*') printf("%f\n", options[2](x, y));
    else if (sign == '/') printf("%f\n", options[3](x, y));

    return 0;
}
