#include <stdio.h>
#include <stdbool.h>
void printBinary(unsigned int num) {
    int leadingZero = 1;  
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            leadingZero = 0; 
        }
        if (!leadingZero) {
            printf("%d", (num >> i) & 1); 
        }
    }

    if (num == 0) {
        printf("0");
    }

    printf("\n");
}
int main(void) {
  printf("%s\n" , "Арифметичні оператори:");
   int x=23;
   int y=12;
   printf("x + y = %d\n" , x+y);
   printf("x - y = %d\n" , x-y);
   printf("x * y = %d\n" , x*y);
   float numberO = (float) x/y;
   printf("x / y = %f\n" , numberO);
   printf("x %% y = %d\n" , x%y);
   printf("x - 1 = %d\n", x-=1);
   printf("y + 1 = %d\n" , y+=1);
   if (x!=y) if (x>y) {
    printf("x більший за y\n");
  }
  if (x<y) {
    printf("x менший за y\n");
  }
  printf("%d\n", 10 >= 9);
  printf("%d\n\n", 16 <= 9);
  printf("%s\n" , "Логічні оператори:");
  printf("%d\n" , !(1<3 && 3<5));
  printf("%d\n\n" , 1<3 || 3<5);
    
    printf("%s\n" , "Побітові оператори:");
    unsigned int a = 170; 
    unsigned int b = 204;  

    printf("Число a = %u в двійковому форматі: ", a);
    printBinary(a);
    printf("Число b = %u в двійковому форматі: ", b);
    printBinary(b);
    
    printf("a & b = %u, в двійковому: ", a & b);
    printBinary(a & b);

    printf("a | b = %u, в двійковому: ", a | b);
    printBinary(a | b);

    printf("a ^ b = %u, в двійковому: ", a ^ b);
    printBinary(a ^ b);

    printf("~a = %u, в двійковому: ", ~a);
    printBinary(~a);

    printf("\nЗсуви:\n");
    printf("a << 2 = %u, в двійковому: ", a << 2);
    printBinary(a << 2);

    printf("a >> 2 = %u, в двійковому: ", a >> 2);
    printBinary(a >> 2);
    
  return 0;
 }