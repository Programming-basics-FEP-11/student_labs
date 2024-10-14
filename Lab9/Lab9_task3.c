#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkEmail(const char *email) {
    int atPos = -1, dotPos = -1, lastDotPos = -1;
    int length = strlen(email);

    // Перевірка: мінімальна довжина для префікса@домен1.домен2
    if (length < 5) return 0;

    // Перевірка наявності тільки одного символу '@' і мінімум одного символу '.'
    for (int i = 0; i < length; i++) {
        if (email[i] == '@') {
            if (atPos != -1) return 0; // більше одного символу '@'
            atPos = i;
        } else if (email[i] == '.') {
            if (atPos != -1) dotPos = i; // перший символ '.' після '@'
            lastDotPos = i;
        } else if (!isalnum(email[i]) && email[i] != '-' && email[i] != '_') {
            return 0; // заборонені символи в електронній адресі
        }
    }

    // Перевірка позицій '@' і '.' 
    if (atPos == -1 || dotPos == -1 || lastDotPos < atPos + 2 || atPos < 1) return 0;

    // Перевірка на правильність домену (останній домен після останньої крапки повинен бути від 2 до 6 символів)
    if (length - lastDotPos - 1 < 2 || length - lastDotPos - 1 > 6) return 0;

    return 1;
}

int main() {
    char email[100];

    printf("Введіть адресу електронної пошти:\n");
    scanf("%s", email);

    if (checkEmail(email)) {
        printf("Адреса електронної пошти правильна.\n");
    } else {
        printf("Адреса електронної пошти неправильна.\n");
    }

    return 0;
}
