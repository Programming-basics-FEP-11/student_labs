#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValidEmail(const char *email) {
    const char *at = strchr(email, '@');
    if (at == NULL || at == email || *(at + 1) == '\0') {
        return false;
    }
    const char *domain = at + 1;
    const char *dot1 = strchr(domain, '.');
    if (dot1 == NULL || dot1 == domain || *(dot1 + 1) == '\0') {
        return false;
    }
    const char *dot2 = strchr(dot1 + 1, '.');
    if (dot2 != NULL && *(dot2 + 1) == '\0') {
        return false;
    }
    if (dot2 != NULL) {
        if (dot1 + 1 == dot2 || *(dot2 + 1) == '\0') {
            return false;
        }
    }
    for (const char *ptr = email; ptr < at; ptr++) {
        if (*ptr == ' ' || *ptr == '@' || *ptr == '.') {
            return false;
        }
    }
    for (const char *ptr = domain; *ptr != '\0'; ptr++) {
        if (*ptr == ' ' || *ptr == '@') {
            return false;
        }
    }
    return true;
}

int main() {
    char email[100];
    printf("Введіть адресу електронної пошти: ");
    scanf("%s", email);
    if (isValidEmail(email)) {
        printf("Адреса електронної пошти правильна.\n");
    } else {
        printf("Адреса електронної пошти неправильна.\n");
    }
    return 0;
}
