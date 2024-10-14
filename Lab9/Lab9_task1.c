#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char str[300], *k = str;
    int word = 0;
    int begin = 0, end = 0, j;

    printf("\nВведіть прислів'я або афоризм англійською, що містить 7+ слів:\n"); 
    scanf("%[^\n]s", str);

    // Підрахунок кількості слів
    while (*k != '\0') { 
        if (*k == ' ') { // Рахуємо кількість пробілів, що визначають слова
            word++; 
        }
        k++;
    }
    word++; // Останнє слово враховується без пробілу

    if (word <= 6) { 
        printf("Речення містить менше 7 слів.\n"); 
        return 0; 
    }

    // Зворотний вивід кожного слова
    for(int i = 0; i <= strlen(str); i++) {
        if(str[i] == ' ' || i == strlen(str)) {
            end = i - 1;
            for(j = end; j >= begin; --j)
                printf("%c", str[j]); // Виводимо символи слова у зворотному порядку
            printf("\n");
            begin = i + 1;
        }
    }

    return 0;
}
