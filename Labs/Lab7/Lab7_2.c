#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int sumup(int x) {
  int sum = 0;
  if (x == 100)
    return 100;
  sum = x + sumup(x + 1);
  return sum;
}
int main(void) {
  int n;
  printf("Write your sequence number ");
  scanf("%d", &n);
  printf("%d", sumup(n));
}