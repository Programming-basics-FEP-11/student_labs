#include <stdio.h>

int main() {
    int number;           // Змінна для зберігання введеного числа
    int *ptr = &number;  // Вказівник, що вказує на адресу змінної number

    // Введення числа
    printf("Введіть число: ");
    scanf("%d", ptr);   // Використовуємо вказівник для введення

    // Виведення значення та адреси
    printf("Введене число: %d\n", *ptr);         // Значення через вказівник
    printf("Адреса пам'яті змінної number: %p\n", (void*)ptr); // Адреса

    return 0;
}