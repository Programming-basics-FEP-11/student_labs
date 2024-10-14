#include <stdio.h>

int main(void) {
    // Виводимо інструкції для користувача
    printf("\nПідрахунок голосних і приголосних звуків у реченні.\n\nВведіть своє речення АНГЛІЙСЬКОЮ: \n");

    // Оголошуємо змінні
    int c, i, v, x; 
    x = 0; // Лічильник приголосних
    v = 0; // Лічильник голосних

    // Цикл для читання символів до символу нового рядка
    while ((c = getchar()) != '\n') {
        // Якщо символ є голосною, збільшуємо лічильник голосних
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') || 
            (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')) {
            v++; 
        }
        // Якщо символ є приголосною, збільшуємо лічильник приголосних
        else if ((c == 'q' || c == 'w' || c == 'r' || c == 't' || c == 'p' || c == 's' || c == 'd' || c == 'f' || c == 'g' || c == 'h' || 
                  c == 'j' || c == 'k' || c == 'l' || c == 'z' || c == 'x' || c == 'c' || c == 'v' || c == 'b' || c == 'n' || c == 'm') ||
                 (c == 'Q' || c == 'W' || c == 'R' || c == 'T' || c == 'P' || c == 'S' || c == 'D' || c == 'F' || c == 'G' || c == 'H' || 
                  c == 'J' || c == 'K' || c == 'L' || c == 'Z' || c == 'X' || c == 'C' || c == 'V' || c == 'B' || c == 'N' || c == 'M')) {
            x++; 
        }
    }

    // Виводимо результат
    printf("\nКількість голосних звуків: %d\n", v);   // Виводимо кількість голосних
    printf("Кількість приголосних звуків: %d", x);   // Виводимо кількість приголосних

    return 0;
}
