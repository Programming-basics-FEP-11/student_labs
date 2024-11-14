#include <stdio.h>
#include <stdlib.h>

int* toPoint(int x, int y) {
    int* ptr = (int*)malloc(2 * sizeof(int));
    ptr[0] = x; ptr[1] = y;
    return ptr;
}

int main() {
    int* ptr = toPoint(2, 3);
    printf("Точка: (%d, %d)\n", ptr[0], ptr[1]);
    printf("Вказівник на неї: %p\n", ptr);
    free(ptr);

    return 0;
}