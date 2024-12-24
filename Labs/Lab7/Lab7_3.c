#include <stdio.h>
float f(float x) { return 6 * x + 17; }
float Solve() {
  float min = -100, max = 100;
  float x;
  while (max - min > 0.00001) {
    x = (min + max) / 2.0;
    if (f(x) == 0.0)
      return x;
    if (f(x) > 0.0)
      max = x;
    if (f(x) < 0.0)
      min = x;
  }
  return x;
}
int main(void) {
  printf("\nEquation: 6x + 17 = 0");
  printf("\nSolution: %g", Solve());
}
