#include <stdio.h>

int main() {
    int num = 255;
    printf("Ціле число в десятковій системі: %d\n", num);
    printf("Ціле число у двійковій системі: %b\n",num );  
    printf("Ціле число у вісімковій системі: %o\n", num);
    printf("Ціле число у шістнадцятковій системі: %x\n", num);
    double realNum = 123.456;
    printf("Дійсне число з плаваючою комою: %f\n", realNum);
    printf("Дійсне число в експоненційній формі: %e\n", realNum);
    printf("Дійсне число в гнучкій формі: %g\n", realNum);
    char ch = 'A';
    char str[] = "Hello, World!";
    printf("Символ: %c\n", ch);
    printf("Рядок: %s\n", str);
    return 0;
}
