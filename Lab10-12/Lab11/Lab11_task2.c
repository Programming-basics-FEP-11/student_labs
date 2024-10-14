#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Оголошення структури для зберігання характеристик ноутбуків
struct computer {
    int num;
    char firm[30];
    int size;
    char resol[10]; 
    char cpu[10];
    int ram;
    char drive[5];
    int dSize;
    char gpu[10];
    int battery;
    float price;
};

int main() {
    printf("\n№ |    Model     |Screen|Resolution|  CPU  | RAM |Storage type| size |    GPU    | Battery | Price\n");

    // Ініціалізація масиву з даними про ноутбуки
    const int count = 7;
    struct computer nouts[count] = {
        {1, "Lenovo Gaming 3", 16, "1920x1080", "AMD", 16, "SSD", 512, "Nvidia3050", 45, 36000},
        {2, "  ACER Nitro 5 ", 16, "1920x1080", "Intel", 16, "SSD", 512, "Nvidia1650", 58, 37000},
        {3, "ASUS Laptop M51", 16, "1920x1080", "AMD", 8, "SSD", 256, "Radeon Gr ", 37, 20000},
        {4, "Lenovo IdeaPad3", 16, "1920x1080", "Intel", 8, "SSD", 512, "Intel Iris", 38, 27000},
        {5, " ACER Aspire 5 ", 15, "1920x1080", "AMD", 8, "SSD", 512, "Radeon Gr ", 48, 26000},
        {6, "HP ProBook 455 ", 15, "1920x1080", "AMD", 16, "SSD", 256, "RadeonVega", 45, 45000},
        {7, "DELL Vostro 351", 16, "1920x1080", "Intel", 16, "SSD", 512, "Intel UHD ", 41, 46000}
    };

    // Виведення таблиці з характеристиками ноутбуків
    for (int i = 0; i < count; i++) {
        printf("%d, %12s, %d, %10s, %5s, %4d, %9s, %9d, %6s, %7d, %.2f \n",
               nouts[i].num, nouts[i].firm, nouts[i].size, nouts[i].resol,
               nouts[i].cpu, nouts[i].ram, nouts[i].drive, nouts[i].dSize,
               nouts[i].gpu, nouts[i].battery, nouts[i].price);
    }

    // Запит номера ноутбука для вибору
    printf("Введіть номер ноутбука:\n");
    int numm;
    scanf("%d", &numm);
    numm--; // Інкремент до індексації масиву

    // Перевірка, чи введений номер вірний
    if (numm >= count || numm < 0) {
        printf("Введено неіснуючий номер(\n");
        return 0;
    }

    // Виведення вибраного ноутбука
    printf("\nОсь вибраний ноутбук:\n№ |    Model     |Screen|Resolution|  CPU  | RAM |Storage type| size |    GPU    | Battery | Price\n");
    printf("%d, %12s, %d, %10s, %5s, %4d, %9s, %9d, %6s, %7d, %.2f \n",
           nouts[numm].num, nouts[numm].firm, nouts[numm].size, nouts[numm].resol,
           nouts[numm].cpu, nouts[numm].ram, nouts[numm].drive, nouts[numm].dSize,
           nouts[numm].gpu, nouts[numm].battery, nouts[numm].price);

    return 0;
}
