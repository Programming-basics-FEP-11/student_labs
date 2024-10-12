#include <stdio.h>
void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" ");  
    }
    printf("\n");
}
int main() {
    int a = 15, b = 7; 
    printf("Арифметичні оператори:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b); 
    printf("a - b = %d\n", a - b); 
    printf("a * b = %d\n", a * b); 
    printf("a / b = %d\n", a / b); 
    printf("a %% b = %d\n", a % b); 
    printf("\nЛогічні оператори:\n");
    printf("a && b = %d\n", a && b); 
    printf("a || b = %d\n", a || b); 
    printf("!a = %d\n", !a); 
    printf("\nПобітові оператори (у двійковому форматі):\n");
    printf("a = ");
    printBinary(a);
    printf("b = ");
    printBinary(b);
    printf("a & b = ");
    printBinary(a & b); 
    printf("a | b = ");
    printBinary(a | b); 
    printf("a ^ b = ");
    printBinary(a ^ b); 
    printf("~a = ");
    printBinary(~a);
    printf("a << 1 = ");
    printBinary(a << 1); 
    printf("b >> 1 = ");
    printBinary(b >> 1); 
    return 0;
}
