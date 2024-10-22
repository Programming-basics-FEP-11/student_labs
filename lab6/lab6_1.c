#include <stdio.h>
#include <string.h>
int main() {
  int cou_hol=0;
  int cou_pryh=0;
  char hol[] = "AEIOUYaeiouy";
  char pryh[] = "BCDFGHJKLMNPQRSTVWXZbcdfjkpghlmnpvrzxwqst";
  char sent[70];
  printf("Введіть речення: \n");
  fgets(sent, sizeof(sent), stdin);
  int n;
  for (n=0; n<strlen(sent); n++) {
  
    if (strchr(hol, sent[n])) {
      
         cou_hol++;
      
    }
    if (strchr(pryh, sent[n])) {
       
         cou_pryh++;
    } }
  printf("Кількість голосних: %d\n", cou_hol);
  printf("Кількість приголосних: %d", cou_pryh);
    return 0;
}