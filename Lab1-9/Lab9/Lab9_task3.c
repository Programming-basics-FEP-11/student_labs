#include <stdio.h>
#include <string.h>
#include <regex.h>

int isValidEmail(const char *email) {
    // Регулярний вираз для перевірки формату електронної пошти
    const char *pattern = "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,3}(\\.[a-zA-Z]{2,})?$";
    regex_t regex;
    int result;

    // Компілюємо регулярний вираз
    if (regcomp(&regex, pattern, REG_EXTENDED) != 0) {
        printf("Помилка компіляції регулярного виразу.\n");
        return 0;
    }

    // Виконуємо перевірку
    result = regexec(&regex, email, 0, NULL, 0);

    // Очищуємо пам'ять, виділену для регулярного виразу
    regfree(&regex);

    // Якщо збіг знайдено, результат поверне 0 (правильна адреса)
    return result == 0;
}

int main() {
    char email[256];

    printf("Введіть адресу електронної пошти: ");
    fgets(email, sizeof(email), stdin);

    // Видаляємо символ нового рядка, який додається `fgets`
    email[strcspn(email, "\n")] = '\0';

    if (isValidEmail(email)) {
        printf("Введена адреса електронної пошти правильна.\n");
    } else {
        printf("Введена адреса електронної пошти неправильна.\n");
    }

    return 0;
}
