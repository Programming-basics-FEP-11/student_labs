#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;

    printf("Введіть число: ");
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("Число %d є простим.\n", number);
    } else {
        printf("Число %d не є простим.\n", number);
    }

    return 0;
}
