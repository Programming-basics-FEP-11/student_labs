#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char testStr[50];
    printf("Введіть стрічку: ");
    
    if (fgets(testStr, sizeof(testStr), stdin) == NULL) {
        printf("Помилка вводу!\n");
        return 1;
    }

    int len = stringLength(testStr);
    if (testStr[len - 1] == '\n') {
        testStr[len - 1] = '\0';
    }

    printf("Ваша стрічка: \"%s\"\n", testStr);
    printf("Довжина стрічки: %d\n", stringLength(testStr));

    printf("Перевірка символів:\n");
    for (int i = 0; testStr[i] != '\0'; i++) {
        printf("Символ %d: '%c' (код: %d)\n", i, testStr[i], testStr[i]);
    }

    return 0;
}
