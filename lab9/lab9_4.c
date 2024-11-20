#include <regex.h>
#include <stdio.h>

int iscorrect(char *email) {
  regex_t regex;
   int result = regcomp(
      &regex,
      "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}(\\.[a-zA-Z]{2,})?$",
      REG_EXTENDED);
  if (result != 0) {
    return 0;
  }
  result = regexec(&regex, email, 0, NULL, 0);
  regfree(&regex);
  return result == 0;
}

int main() {
  char email[256];
  printf("Enter an email address: ");
  scanf("%255s", email);

  if (iscorrect(email))
    printf("правильна адреса\n");
  else
    printf("неправильна адреса\n");

  return 0;
}
