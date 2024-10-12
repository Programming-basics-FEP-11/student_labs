#include <stdio.h>
#include <math.h>

// Функція для перевірки, чи є число простим
int is_prime(int number) {
    if (number <= 1) {
        return 0; // Числа менші або рівні 1 не є простими
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0; // Знайдено дільник, число не є простим
        }
    }
    return 1; // Число є простим
}

int main() {
    int num;
    printf("Введіть число: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("%d є простим числом.\n", num);
    } else {
        printf("%d не є простим числом.\n", num);
    }

    return 0;
}
