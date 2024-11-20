#include <stdio.h>
#include <stdlib.h>
int *toPoint(int x, int y)
{
    int *ptr = (int *)malloc(2 * sizeof(int));
    ptr[0] = x;
    ptr[1] = y;
    return ptr;
}
int main(void)
{
    int x = 5, y = 10;
    int *point = toPoint(x, y);
    printf("Координати точки: (%d,%d)\n", point[0], point[1]);
    printf("Вказівник на точку: %p\n", (void *)point);
    free(point);
    return 0;
}