#include <stdio.h>

int main() {
    // Оголошення змінних для зберігання даних
    char surname1[100], email1[100], color1[20];
    char surname2[100], email2[100], color2[20];
    char surname3[100], email3[100], color3[20];

    // Введення даних для першої людини
    printf("Введіть дані для людини #1:\n");
    printf("Прізвище: ");
    scanf("%99s", surname1);

    printf("Ел. пошта: ");
    scanf("%99s", email1);

    printf("Улюблений колір: ");
    scanf("%19s", color1);

    // Введення даних для другої людини
    printf("Введіть дані для людини #2:\n");
    printf("Прізвище: ");
    scanf("%99s", surname2);

    printf("Ел. пошта: ");
    scanf("%99s", email2);

    printf("Улюблений колір: ");
    scanf("%19s", color2);

    // Введення даних для третьої людини
    printf("Введіть дані для людини #3:\n");
    printf("Прізвище: ");
    scanf("%99s", surname3);

    printf("Ел. пошта: ");
    scanf("%99s", email3);

    printf("Улюблений колір: ");
    scanf("%19s", color3);

    // Виведення таблиці
    printf("\n%-5s%-20s%-30s%-20s\n", "№", "Прізвище", "Ел. пошта", "Улюблений колір");
    printf("---------------------------------------------------------------\n");

    printf("%-5d%-20s%-30s%-20s\n", 1, surname1, email1, color1);
    printf("%-5d%-20s%-30s%-20s\n", 2, surname2, email2, color2);
    printf("%-5d%-20s%-30s%-20s\n", 3, surname3, email3, color3);

    return 0;
}
