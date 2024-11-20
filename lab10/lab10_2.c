#include <stdio.h>
#include <stdlib.h>

int* toPoint(int x, int y) {
    int *point = (int*)malloc(2 * sizeof(int));
    if (point == NULL) {
        printf("Помилка виділення пам'яті!\n");
        return NULL;
    }

    point[0] = x;
    point[1] = y;

    return point;
}

int main() {
    int x = 10, y = 8;

    int *point = toPoint(x, y);

    if (point == NULL) {
        return 1;
    }

    printf("Точка: (%d, %d)\n", point[0], point[1]);
    printf("Вказівник на точку: %p\n", (void*)point);

    free(point);
    printf("Пам'ять звільнено.\n");

    return 0;
}
