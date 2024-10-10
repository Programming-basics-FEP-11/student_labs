#include <stdio.h>

int main(void) {
  int num1;
  int *qwe = &num1;
  
  printf("Введіть число:");
  scanf("%d", &num1);
  
  printf("Значення: %d\n", *qwe);
  printf("Адреса: %p\n", (void *)qwe);
  return 0;
}