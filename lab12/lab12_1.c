#include <stdio.h>

int main() {
    FILE *file = fopen("mfile.txt", "w"); 
    if (!file) {
        perror("Помилка відкриття файлу");
        return 1;
    }

    char buffer[256]; 
    printf("Введіть 10 рядків тексту для запису у файл:\n");

    for (int i = 1; i <= 10; i++) {
        fgets(buffer, sizeof(buffer), stdin); 
        fprintf(file, "%s", buffer);     
    }

    fclose(file);
    printf("Текст успішно збережено у файлі 'mfile.txt'.\n");
    return 0;
}

