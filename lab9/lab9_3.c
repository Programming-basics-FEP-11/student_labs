#include <stdio.h>
#include <regex.h>

int isValidEmail(const char *email) {
    regex_t regex;
    const char *pattern = "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$";
    int reti = regcomp(&regex, pattern, REG_EXTENDED);
    if (reti) {
        fprintf(stderr, "Не вдалося скомпілювати регулярний вираз\n");
        return 0;
    }

    reti = regexec(&regex, email, 0, NULL, 0);
    regfree(&regex);

    if (!reti) {
        return 1; // Адреса коректна
    } else {
        return 0; // Адреса некоректна
    }
}

int main() {
    char email[100];
    printf("Введіть адресу електронної пошти: ");
    scanf("%s", email);

    if (isValidEmail(email)) {
        printf("Адреса коректна\n");
    } else {
        printf("Адреса некоректна\n");
    }

    return 0;
}
