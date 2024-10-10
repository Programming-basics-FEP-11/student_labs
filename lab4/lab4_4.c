#include <stdio.h>

int main(void) {
  double a, b, c, x1, x2;
  printf("Перший коефіцієнт:");
  scanf("%lf", &a);
  printf("Другий коефіцієнт:");
  scanf("%lf", &b);
  printf("Третій коефіцієнт:");
  scanf("%lf", &c);

  int d = b * b - 4 * a * c;
  if (d < 0){
    printf("Рівняння не має розв'язків");
  } else if(d == 0){
    x1 = b/(2*a);
    printf("Рівняння має один корінь: %lf", x1);
  } else{
    x1 = (-b - sqrt(d))/(2*a);
    x2 = (-b + sqrt(d))/(2*a);
    printf("Рівняння має два корені: %lf, %lf", x1, x2);
  }
  return 0;
}