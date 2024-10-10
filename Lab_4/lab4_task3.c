#include <math.h> 
#include <stdio.h>

int main() {
  double a, b, c; 
  double discriminant, x1, x2, realPart, imagPart;

  printf("Введіть коефіцієнт a: ");
  scanf("%lf", &a);
  printf("Введіть коефіцієнт b: ");
  scanf("%lf", &b);
  printf("Введіть коефіцієнт c: ");
  scanf("%lf", &c);

  discriminant = b * b - 4 * a * c;
  printf("Дискримінант: %lf\n" , discriminant);

  if (discriminant > 0) {

    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Корені рівняння: %.2lf і %.2lf\n", x1, x2);
  } 
    else if (discriminant == 0) {

    x1 = -b / (2 * a);
    printf("Рівняння має один корінь: %.2lf\n", x1);
  } else if (discriminant < 0) {

    printf("%s" , "Коренів немає.");
  }

  return 0;
}
