#include <stdio.h>

int main() {
    int number;
    printf("Введіть число: ");
    scanf("%d" , &number);
    int out;
    int* ad=&number;
    out=*ad;
    printf("Адреса змінної: %p\n" , ad);
    printf("Значення змінної: %d" , *ad);
    return 0;

}