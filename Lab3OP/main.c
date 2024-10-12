#include <stdio.h>

void printBinary(int num) {
    // Змінна для зберігання кількості бітів
    int bits = sizeof(num) * 8; // Кількість біт у числі
    for (int i = bits - 1; i >= 0; i--) {
        // Виводимо кожен біт
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    int num = 123;
    double real = 123.456;
    char ch = 'A';
    char str[] = "Hello, World";
    int *ptr = &num;

    // Виведення цілого числа в різних форматах
    printf("Десятковий формат: %d\n", num);
    printf("Двійковий формат: ");
    printBinary(num); // Викликаємо функцію для виводу двійкового формату
    printf("\n");
    printf("Вісімковий формат: %o\n", num);
    printf("Шістнадцятковий формат: %x\n", num);

    // Виведення дійсного числа
    printf("Дійсне число (звичайний формат): %f\n", real);
    printf("Дійсне число (експоненційний формат): %e\n", real);
    printf("Дійсне число (гнучкий формат): %g\n", real);

    // Виведення символа, рядка і вказівника
    printf("Символ: %c\n", ch);
    printf("Рядок: %s\n", str);
    printf("Вказівник: %p\n", (void *)ptr);

    return 0;
}