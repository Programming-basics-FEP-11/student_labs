#include <stdio.h>
#include <regex.h>

int isValidEmail(const char *email);

int main() {
    char email[100];
    printf("Введіть адресу електронної пошти: ");
    scanf("%s", email);

    if (isValidEmail(email)) {
        printf("Правильна адреса електронної пошти.\n");
    } else {
        printf("Неправильна адреса електронної пошти.\n");
    }
    return 0;
}

int isValidEmail(const char *email) {
    regex_t regex;
    int result;

    // Регулярний вираз для базової перевірки email
    const char *pattern = "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$";

    // Компіляція регулярного виразу
    result = regcomp(&regex, pattern, REG_EXTENDED);
    if (result) {
        printf("Не вдалося скомпілювати регулярний вираз.\n");
        return 0;
    }

    // Виконання пошуку за регулярним виразом
    result = regexec(&regex, email, 0, NULL, 0);
    regfree(&regex);  // Звільнення пам'яті, виділеної для regex

    // Повернення 1, якщо регулярний вираз знайшов відповідність, інакше 0
    return !result;
}
