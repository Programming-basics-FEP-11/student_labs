#include <stdio.h>
int main() {
    int number;         
    int *ptr;            // Вказівник на змінну
    printf("Введіть число: ");
    scanf("%d", &number);
    // Присвоєння адреси змінної number вказівнику ptr
    ptr = &number;
    printf("Ви ввели число: %d\n", *ptr);      // Виведення значення через вказівник
    printf("Адреса числа: %p\n", (void*)ptr);  // Виведення адреси числа
    return 0;
}
