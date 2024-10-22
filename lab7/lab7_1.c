#include <stdio.h>
  int number;
  int func(){
    printf("Введіть число: ");
    scanf(" %d", &number);
    if (number<=1){
      printf ("Число не є простим");
      return 0; }
    for (int a=2; a*a<=number; a++) {
    if (number%a==0){
      printf("Число не є простим");
      return 0;
     }  
  }
  printf("Число просте"); }
int main() {
  func();
  return 0; 
}
  
