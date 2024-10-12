#include <stdio.h>

// Рекурсивна функція для обчислення суми чисел від N до 100
int sum_from_n_to_100(int n) {
    if (n > 100) {
        return 0; // Якщо N більше 100, повертаємо 0
    }
    return n + sum_from_n_to_100(n + 1);
}

int main() {
    int N;
    printf("Введіть число N: ");
    scanf("%d", &N);

    int sum = sum_from_n_to_100(N);
    printf("Сума чисел від %d до 100: %d\n", N, sum);

    return 0;
}
