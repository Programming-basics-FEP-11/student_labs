#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Nums[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int* funcA() {
    int n;
    printf("Введіть індекс елемента масиву: ");
    scanf("%d", &n);

    if (n < 0 || n >= 10) 
        return NULL; 

    int* ptr = &Nums[n];
    printf("Вказівник на елемент масиву: %p\n", (void*)ptr);
    return ptr; 
}

int randomInRange(int min, int max) {
    return min + rand() % (max - min + 1);
}

int* funcB() {
    int ranNums[12][12];
    srand(time(0));  

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            ranNums[i][j] = randomInRange(1, 100); 
        }
    }
    int rowIndex, colIndex;
    printf("Введіть індекс рядка (0-11): ");
    scanf("%d", &rowIndex); 
    printf("Введіть індекс стовпчика (0-11): ");
    scanf("%d", &colIndex); 

    if (rowIndex < 0 || rowIndex >= 12 || colIndex < 0 || colIndex >= 12) {
        printf("Некоректні індекси. Введіть індекси від 0 до 11.\n");
        return NULL;
    } else {
        int* ptr = &ranNums[rowIndex][colIndex]; 
        printf("Вказівник на елемент з індексами (%d, %d): %p\n", rowIndex, colIndex, (void*)ptr); 
        return ptr; 
    }
}

int main(){
    funcA(); 
    funcB(); 
  
    return 0;
}
