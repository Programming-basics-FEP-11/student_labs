#include <stdio.h>
#include <string.h>

int main(void) {
  int N;
  float num, sum = 0.0, medium, min =0.0, max=0.0;
  printf("Введіть число від 7 до 12: ");
  scanf("%d", &N);
  while (N < 7 || N > 12){
    printf("Неправильне число. Введіть число від 7 до 12: ");
  scanf("%d", &N); }
  for (int e = 0; e < N; e++) {
    printf("Введіть число %d: \n", e + 1);
    scanf("%f", &num);
    sum += num;
    if (e == 0) {
      min = num;
      max = num;}
    else {
      if (num < min)
      min = num;
       if (num > max)
      max = num; }
  }
  medium = sum / N;
  printf("Сума чисел: %.2f\n", sum);
  printf("Середнє арифметичне: %.2f\n", medium);

  printf("Мінімальне число : %.2f\n", min);
  printf("Максимальне число : %.2f\n", max);

  return 0;
}