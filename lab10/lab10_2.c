#include <stdio.h>
#include <stdlib.h>

int* toPoint(int x, int y) {
    int* point = (int*)malloc(2 * sizeof(int));
    point[0] = x;
    point[1] = y;
    return point;
}

int main() {
    int x = 5;
    int y = 10;
    int* point = toPoint(x, y);
    printf("Координати точки: (%d, %d)\n", point[0], point[1]);
    printf("Вказівник на точку: %p\n", (void*)point);
    free(point);
    return 0;
}
