#include <stdio.h>
#include <stdlib.h>

int *toPoint(int x, int y) {
  int *point = (int *)malloc(2 * sizeof(int));
  if (point == NULL) {
    printf("Memory allocation failed.\n");
    exit(1);
  }
  point[0] = x;
  point[1] = y;
  return point;
}

int main() {
  int x = 5, y = 10;

  int *point = toPoint(x, y);

  printf("Point: (%d, %d)\n", point[0], point[1]);
  printf("Memory address of point: %p\n", (void *)point);

  free(point);
  return 0;
}
