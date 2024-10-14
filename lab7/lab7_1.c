#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Введіть число: ");
    scanf("%d", &num);

    if (is_prime(num))
        printf("Число %d є простим.\n", num);
    else
        printf("Число %d не є простим.\n", num);

    return 0;
}
