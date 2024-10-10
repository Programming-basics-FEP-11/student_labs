#include <stdio.h>

int main(void) {
  int num1 = 10;
  int num2 = 2;
  printf("Арифметичні оператори:\n");
  printf("віднімання: %d - %d = %d\n", num1, num2, num1 - num2);
  printf("додавання: %d + %d = %d\n", num1, num2, num1 + num2);
  printf("множення: %d * %d = %d\n", num1, num2, num1*num2);
  printf("ділення: %d / %d = %d\n", num1, num2, num1/num2);
  printf("остача: %d %% %d = %d\n", num1, num2, num1%num2);
  printf("декремент: %d\n", --num1); 
  printf("інкремент: %d\n", ++num1);

  printf("\nЛогічні оператори:");
  printf("\nлогічне І: %d && %d = %d\n", num1, num2, num1 && num2);
  printf("логічне АБО: %d || %d = %d\n", num1, num2, num1 || num2);
  printf("логічне НЕ: !%d = %d\n", num1, !num1);  

  printf("\nЛогічні побітові оператори:\n");
  printf("Побітове І: %04b & %04b = %04b\n", num1, num2, num1 & num2);
  printf("Побітове АБО: %04b | %04b = %04b\n", num1, num2, num1 | num2);
  printf("Побітове додавання за модулем 2: %04b ^ %04b = %04b\n", num1, num2, num1 ^ num2);
  printf("Побітовий зсув вправо: %04b >> %d = %04b\n", num1, 1, num1 >> 1);
  printf("Побітовий зсув вліво: %04b << %d = %04b\n", num1, 2, num1 << 2);
  return 0;
}