#include <ctype.h>
#include <stdio.h>
#include <string.h>

void str_swap(char *str1, char *str2) {
    char temp[30]; 
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void int_swap(int *d1, int *d2) {
    int temp = *d1;
    *d1 = *d2;
    *d2 = temp;
}

int main() {
    int studcount;
    printf("Введіть кількість студентів, не менше 10: ");
    scanf("%d", &studcount);
    if (studcount < 10) {
        printf("Кількість менше десяти");
        return 0;
    }
    printf("Введіть список групи в форматі Номер-[пробіл]-Прізвище-[пробіл]-Ім'я:\n");

    int studnum[studcount];
    char names[studcount][30];
    char surnames[studcount][30];

    for (int i = 0; i < studcount; i++) {
        scanf("%d %s %s", &studnum[i], surnames[i], names[i]);
    }

    int unique_count = 0;

    for (int i = 0; i < studcount; i++) {
        int is_unique = 1;
        for (int j = 0; j < i; j++) {
            if (strcasecmp(names[j], names[i]) == 0) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            unique_count++;
        }
    }
    printf("Кількість унікальних імен: %d\n", unique_count);

    for (int i = 0; i < studcount - 1; i++) {
        for (int j = i + 1; j < studcount; j++) {
            if (strcmp(surnames[i], surnames[j]) > 0) {
                str_swap(surnames[i], surnames[j]);
                str_swap(names[i], names[j]);
                int_swap(&studnum[i], &studnum[j]);
            }
        }
    }

    printf("Відсортований список:\n");
    for (int i = 0; i < studcount; i++) {
        printf("%d %s %s\n", studnum[i], surnames[i], names[i]);
    }

    return 0;
}
