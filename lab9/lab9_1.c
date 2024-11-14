#include <stdio.h>
#include <string.h>
int main() {
  char str[80];
  char str12[80];
  printf("Введіть прислів'я або афоризм: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';

  for (int i = strlen(str) - 1; i >= 0; i--) {
      str12[i] = str[strlen(str) - i - 1];
    }
  str12[strlen(str)] = '\0';
  
  printf("Слова в зворотньому порядку: \n");
  
  for (int i = 0; i < strlen(str12); i++) {
    if (str12[i] == ' ') {
      printf("\n");
    } printf("%c", str12[i]);
  }

  return 0;
}