#include <stdio.h> 

int count(int min, int max); 

int main() { 
    // Виводимо текст, що вказує на виконання рекурсії
    printf("\nРекурсія\n\nСума цілих чисел від 14 до 100 : %d", count (14, 100)); 
    return 0; 
} 

// Функція count обчислює суму цілих чисел від min до max
int count(int min, int max) { 
    if (min > max) return 0; 

    return min + count(min + 1, max); 
}
