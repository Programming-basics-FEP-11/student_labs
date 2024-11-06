#include <stdio.h>
int main(void) {
int number = 50;
double floating= 123.456;
char letter = 'A';
char str[] = "hello";
void *qwe = &number;
printf("десяткове = %d\n", number);
printf("двійкове = %b\n", number);
printf("шістнадцяткове = %x\n", number);
printf("Biciмкове = %o\n", number);
    
printf("плаваюча = %f\n", floating);
printf("експонційна = %e\n", floating);
printf("гнучка = %g\n", floating);
    
printf("символ = %c\n", letter);
printf("стрічка = %s\n", str);
printf("вказiвник = %p\n", qwe);
return 0;
}