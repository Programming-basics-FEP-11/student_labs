#include <stdbool.h>
#include <stdio.h>
int main() {
  while (true) {
    int n;
    int i;
    int s = 0;
    printf("\nWrite your number: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++) {
      if (n % i == 0) {
        s = 1;
        break;
      }
    }
    if (s == 0)
      printf("This number is simple \n");
    else
      printf("This number isn`t simple\n");
  }
  return 0;
}