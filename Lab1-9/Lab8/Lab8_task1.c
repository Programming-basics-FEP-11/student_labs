#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>   

int main(void) {
    printf("Масив з 10 чисел\n\n");

    int a[10]; // Оголошуємо масив з 10 цілих чисел
    int i;  
    int k = 1; 

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        // Генеруємо випадкове число від 0 до 99 та присвоюємо його елементу масиву
        a[i] = rand() % 100;

        // Виводимо індекс елемента (k) та його значення (a[i])
        printf("\n%d: %d ", k++, a[i]);
    }
    
    return 0; 
}
