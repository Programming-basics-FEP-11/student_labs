#include <stdio.h>
#include <string.h>

#define LAPTOP_COUNT 7

typedef struct {
    char manufacturer[50];
    float displaySize;
    char displayResolution[20];
    char processorType[50];
    int ramSize; 
    char storageType[20];
    int diskCapacity;
    char videoCardType[50];
    int batteryCapacity;
    float price;
} Laptop;

void displayLaptop(const Laptop *l) {
    printf("\n--- Характеристики ноутбука ---\n");
    printf("Виробник: %s\n", l->manufacturer);
    printf("Діагональ дисплея: %.1f дюймів\n", l->displaySize);
    printf("Роздільна здатність дисплея: %s\n", l->displayResolution);
    printf("Процесор: %s\n", l->processorType);
    printf("Оперативна пам'ять: %d ГБ\n", l->ramSize);
    printf("Тип сховища: %s\n", l->storageType);
    printf("Об'єм диска: %d ГБ\n", l->diskCapacity);
    printf("Відеокарта: %s\n", l->videoCardType);
    printf("Ємність акумулятора: %d мАг\n", l->batteryCapacity);
    printf("Ціна: %.2f $\n", l->price);
}

int main() {
    Laptop laptops[LAPTOP_COUNT] = {
        {"Lenovo", 15.6, "1920x1080", "Intel i5", 8, "SSD", 512, "Intel UHD", 4500, 700},
        {"HP", 14.0, "1366x768", "AMD Ryzen 3", 4, "HDD", 1024, "Radeon Vega", 4000, 600},
        {"Asus", 17.3, "2560x1440", "Intel i7", 16, "SSD", 1024, "NVIDIA GTX 1650", 6000, 1200},
        {"Dell", 13.3, "1920x1080", "Intel i3", 8, "SSD", 256, "Intel Iris", 3500, 800},
        {"Acer", 15.6, "1920x1080", "AMD Ryzen 5", 16, "SSD", 512, "NVIDIA RTX 3050", 4800, 1100},
        {"Apple", 13.0, "2560x1600", "M1", 8, "SSD", 512, "Apple GPU", 6000, 1500},
        {"MSI", 15.6, "1920x1080", "Intel i9", 32, "SSD", 2048, "NVIDIA RTX 3080", 7500, 2500}
    };

    printf("Список ноутбуків:\n");
    for (int i = 0; i < LAPTOP_COUNT; i++) {
        printf("%d. %s | Ціна: %.2f $\n", i + 1, laptops[i].manufacturer, laptops[i].price);
    }

    int choice;
    printf("\nОберіть ноутбук за номером (1-%d): ", LAPTOP_COUNT);
    scanf("%d", &choice);

    if (choice >= 1 && choice <= LAPTOP_COUNT) {
        displayLaptop(&laptops[choice - 1]);
    } else {
        printf("Невірний вибір!\n");
    }

    return 0;
}
