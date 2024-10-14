#include <stdio.h>
int main() {
    float num1, num2;
    printf("Введіть перше число: ");
    scanf("%f", &num1);
    printf("Введіть друге число: ");
    scanf("%f", &num2);
    // Порівняння чисел за допомогою if-else
    if (num1 > num2) {
        printf("%.2f більше за %.2f\n", num1, num2);
    } else if (num1 < num2) {
        printf("%.2f менше за %.2f\n", num1, num2);
    } else {
        printf("%.2f дорівнює %.2f\n", num1, num2);
    }
    return 0;
}
