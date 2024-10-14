#include <stdio.h>

int sum_recursive(int n) {
    if (n > 100) return 0;
    return n + sum_recursive(n + 1);
}

int main() {
    int start_number;
    printf("Введіть ваш порядковий номер: ");
    scanf("%d", &start_number);

    int sum = sum_recursive(start_number);
    printf("Сума чисел від %d до 100: %d\n", start_number, sum);

    return 0;
}
