#include <stdio.h>

int main(void) {
    int numberD=343;
    printf(" Ціле число у десятковому форматі: %u\n", numberD);
    printf(" Ціле число у двійковому форматі: %b\n", numberB);
    printf(" Ціле число у вісімковому форматі: %o\n", numberD);
    printf(" Ціле число у шістнадцятковому форматі: %x\n", numberD);
    float numberF=25.342;
    printf(" Дійсне число з плаваючою комою: %f\n", numberF);
    printf(" Дійсне число з плаваючою комою в експоненційній формі: %e\n", numberF);
    printf(" Дійсне число з плаваючою комою в гнучкій формі: %g\n", numberF);
    char letter='F';
    printf(" Символ: %c\n", letter);
    char text[]="Я хочу спати";
    printf(" Стрічка: %s\n", text);
    void *pointer = &numberD;
    printf(" Вказівник: %p\n", pointer);
    
    return 0;
    
}
