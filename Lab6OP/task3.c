#include <stdio.h>

int main() {
    int N;
    float number, sum = 0, min, max, average;

    
    printf("Введіть число N (від 7 до 12): ");
    scanf("%d", &N);

    
    if (N < 7 || N > 12) {
        printf("Число N повинно бути в межах від 7 до 12.\n");
        return 1; 
    }

   
    printf("Введіть число 1: ");
    scanf("%f", &number);
    sum = min = max = number; 

   
    for (int i = 2; i <= N; i++) {
        printf("Введіть число %d: ", i);
        scanf("%f", &number);
        sum += number;

     
        if (number < min) {
            min = number;
        }
        if (number > max) {
            max = number;
        }
    }

   
    average = sum / N;

    
    printf("Сума: %.2f\n", sum);
    printf("Середнє арифметичне: %.2f\n", average);
    printf("Мінімальне значення: %.2f\n", min);
    printf("Максимальне значення: %.2f\n", max);

    return 0;
}