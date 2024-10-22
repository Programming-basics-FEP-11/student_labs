#include <stdio.h>

int sum(int n) {
  if (n > 0) {
    return n + sum(n - 1);
  } else {
    return 0;
  }
}
int main() {
  int result = sum(100);
  printf("Сума чисел від 1 до 100: %d", result);
  return 0;
}

  
