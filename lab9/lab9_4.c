#include <ctype.h>
#include <stdio.h>
#include <string.h>

int iscorrect(char *email) {
  char *at_sign = strchr(email, '@');
  if (!at_sign || strchr(at_sign + 1, '@')) {
    printf("неправильна адреса\n");
    return 0;
  }

  char email_copy[100];
  strcpy(email_copy, email);

  char *prefix = strtok(email_copy, "@");
  char *domains = strtok(NULL, "@");

  if (!prefix || !domains || strlen(prefix) < 1 || strlen(domains) < 1) {
    printf("замаленька довжина\n");
    return 0;
  } else if (strlen(prefix) > 64 || strlen(domains) > 255) {
    printf("завелика довжина\n");
    return 0;
  }

  if (prefix[0] == '.' || domains[0] == '.' ||
      prefix[strlen(prefix) - 1] == '.' ||
      domains[strlen(domains) - 1] == '.' || strstr(prefix, "..") ||
      strstr(domains, "..")) {
    printf("неправильна адреса\n");
    return 0;
  }

  for (int i = 0; email[i] != '\0'; i++) {
    if (email[i] != '.' && email[i] != '-' && !isalnum(email[i]) &&
        email[i] != '@') {
      printf("неправильна адреса\n");
      return 0;
    }
  }

  return 1;
}

int main() {
  char email[100];
  scanf("%s", email);

  if (iscorrect(email)) {
    printf("добра адреса\n");
  }

  return 0;
}
