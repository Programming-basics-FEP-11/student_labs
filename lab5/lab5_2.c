#include <stdio.h>

int main(void){
    int a, b;
    printf("First num:");
    scanf("%d", &a);
    printf("Second num:");
    scanf("%d", &b);
    a > b ? printf("first number is bigger than second\n") 
    : a < b ? printf("second number is bigger than first\n") 
    : printf("first number is equal to the second\n");
    return 0;
}
