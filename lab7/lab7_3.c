#include <stdio.h>

int sum(int a) {
    return a > 100 ? 0 : a + sum(a + 1);
}
int main(void) {
  printf("%d\n", sum(4));
  return 0;
} 
