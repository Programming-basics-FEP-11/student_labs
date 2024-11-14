#include <regex.h>
#include <stdio.h>

int validateEmail(const char *email) {
  const char *pattern =
      "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}(\\.[a-zA-Z]{2,})?$";
  regex_t regex;

  if (regcomp(&regex, pattern, REG_EXTENDED) != 0) {
    printf("Could not compile regex.\n");
    return 0;
  }

  int status = regexec(&regex, email, 0, NULL, 0);
  regfree(&regex); 

  return status == 0; 
}

int main() {
  char email[256];

  printf("Enter an email address: ");
  scanf("%s", email);

  if (validateEmail(email)) {
    printf("Valid email address.\n");
  } else {
    printf("Invalid email address.\n");
  }

  return 0;
}
