#include <stdio.h>

int main() {
    int N;
    double num, sum = 0, min, max;
    
    do {
        printf("Введіть ціле число N у діапазоні [7; 12]: ");
        scanf("%d", &N);
    } while (N < 7 || N > 12); 

    printf("Введіть число 1: ");
    scanf("%lf", &num);
    sum = num;
    min = num;
    max = num;
    
    for (int i = 1; i < N; i++) {
        printf("Введіть число %d: ", i + 1);
        scanf("%lf", &num);

        sum += num;  
        if (num < min) {
            min = num;  
        }
        if (num > max) {
            max = num;  
        }
    }

    double average = sum / N;

    printf("Сума: %.2lf\n", sum);
    printf("Середнє арифметичне: %.2lf\n", average);
    printf("Мінімальне значення: %.2lf\n", min);
    printf("Максимальне значення: %.2lf\n", max);

    return 0;
}
