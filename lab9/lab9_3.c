#include <stdio.h>
#include <regex.h>

int main() {
    char email[100];
    regex_t regex;
    int reti;
    
    char* pattern = "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$";

    reti = regcomp(&regex, pattern, REG_EXTENDED);
    if (reti) {
        fprintf(stderr, "Could not compile regex\n");
        return 1;
    }

    printf("Введіть email-адресу: ");
    scanf("%s", email);

    reti = regexec(&regex, email, 0, NULL, 0);
    if (!reti) {
        printf("Email-адреса правильна\n");
    }
    else if (reti == REG_NOMATCH) {
        printf("Email-адреса неправильна\n");
    }
    else {
        fprintf(stderr, "Regex match failed\n");
        return 1;
    }

    regfree(&regex);

    return 0;
}