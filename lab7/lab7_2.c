#include <stdio.h>

int sum_recursive(int n) {
    if (n < 2) {
        return 0;
    }
    return n + sum_recursive(n - 1);
}

int main() {
    int result = sum_recursive(100);
    printf("Сума чисел від 2 до 100: %d\n", result);
    return 0;
}
