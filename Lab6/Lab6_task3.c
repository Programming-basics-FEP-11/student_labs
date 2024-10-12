#include <stdio.h>

int main() {
    int N;
    float numbers[12], sum = 0, average, min, max;

    // Введення числа N в межах від 7 до 12
    do {
        printf("Введіть число N (від 7 до 12): ");
        scanf("%d", &N);
    } while (N < 7 || N > 12);

    // Введення N дійсних чисел
    for (int i = 0; i < N; i++) {
        printf("Введіть число %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];

        // Оновлюємо мінімальне та максимальне значення
        if (i == 0) {
            min = max = numbers[i];
        } else {
            if (numbers[i] < min) {
                min = numbers[i];
            }
            if (numbers[i] > max) {
                max = numbers[i];
            }
        }
    }

    // Обчислення середнього арифметичного
    average = sum / N;

    // Виведення результатів
    printf("Сума введених чисел: %.2f\n", sum);
    printf("Середнє арифметичне: %.2f\n", average);
    printf("Мінімальне значення: %.2f\n", min);
    printf("Максимальне значення: %.2f\n", max);

    return 0;
}
