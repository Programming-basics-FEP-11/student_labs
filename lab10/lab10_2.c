#include <stdio.h>
int strlen(char str[]){
    int cnt = 0;
    while(str[cnt] != '\0'){
        cnt++;
    }
    return cnt;
}
int main(void){
  char str[] = "Hello world";
  printf("Довжина стрічки = %d", strlen(str));
}