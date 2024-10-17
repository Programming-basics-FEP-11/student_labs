#include <stdio.h>

int main() {
    int my_number, sum = 0;

    
    printf("Введіть ваш порядковий номер: ");
    scanf("%d", &my_number);

   
    int i = 1;
    while (i <= 100) {
        if (i != my_number && i != 33) {
            sum += i; 
        }
        i++;
    }

    printf("Сума перших 100 чисел (без %d і 33): %d\n", my_number, sum);

    return 0;
}