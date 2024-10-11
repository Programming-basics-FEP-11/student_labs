#include <stdio.h>
int main(void) {
int x;
printf("\nВведіть тризначне число:\n");
scanf("%d", &x);
if (x < 100 || x > 999) {
printf("Ваше число не є тризначним\n");
return main();
}
printf("Ось ваше число прописом:\n");
switch (x / 100) {
case 1: printf("Сто ");
break;
case 2: printf("Двісті ");
break;
case 3: printf("Триста ");
break;
case 4: printf("Чотириста ");
break;
case 5: printf("П'ятсот ");
break;
case 6: printf("Шістсот ");
break;
case 7: printf("Сімсот ");
break;
case 8: printf("Вісімсот ");
break;
case 9: printf("Дев'ятсот ");
break;
}
switch ((x % 100) / 10) {
case 2: printf("двадцять ");
break;
case 3: printf("тридцять ");
break;
case 4: printf("сорок ");
break;
case 5: printf("п'ятдесят ");
break;
case 6: printf("шістдесят ");
break;
case 7: printf("сімдесят ");
break;
case 8: printf("вісімдесят ");
break;
case 9: printf("дев'яносто ");
break;
}
if (x % 100 >= 10 & x % 100 < 20) {
switch (x % 100){
case 10: printf("десять");
break;
case 11: printf("одинадцать");
break;
case 12: printf("дванадцать");
break;
case 13: printf("тринадцать");
break;
case 14: printf("чотирнадцать");
break;
case 15: printf("п'ятнадцать");
break;
case 16: printf("шістнадцать");
break;
case 17: printf("сімнадцать");
break;
case 18: printf("вісімнадцать");
break;
case 19: printf("дев'ятнадцать");
break;
}
}
else {
switch (x % 10 ) {
case 1: printf("один ");
break;
case 2: printf("два");
break;
case 3: printf("три");
break;
case 4: printf("чотири");
break;
case 5: printf("п'ять");
break;
case 6: printf("шість");
break;
case 7: printf("сім");
break;
case 8: printf("вісім");
break;
case 9: printf("дев'ять");
break;
}
}
return 0;
}