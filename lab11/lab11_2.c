#include <stdio.h>
#include <string.h>

struct Laptop {
    char manufacturer[50];
    char displaySize[20];
    char resolution[20];
    char processorType[50];
    int ramSize;
    char storageType[20];
    int diskSize;
    char graphicsCardType[50];
    int batteryCapacity;
    float price;
};

void inputLaptopData(struct Laptop* laptop) {
    printf("Введіть виробника: ");
    scanf("%s", laptop->manufacturer);
    printf("Введіть розмір дисплея: ");
    scanf("%s", laptop->displaySize);
    printf("Введіть роздільну здатність дисплея: ");
    scanf("%s", laptop->resolution);
    printf("Введіть тип процесора: ");
    scanf("%s", laptop->processorType);
    printf("Введіть розмір оперативної пам'яті (ГБ): ");
    scanf("%d", &laptop->ramSize);
    printf("Введіть тип накопичувача: ");
    scanf("%s", laptop->storageType);
    printf("Введіть обсяг диска (ГБ): ");
    scanf("%d", &laptop->diskSize);
    printf("Введіть тип відеокарти: ");
    scanf("%s", laptop->graphicsCardType);
    printf("Введіть ємність акумулятора (мАг): ");
    scanf("%d", &laptop->batteryCapacity);
    printf("Введіть ціну: ");
    scanf("%f", &laptop->price);
}

void printLaptops(const struct Laptop laptops[], int count) {
    printf("\nТаблиця характеристик ноутбуків:\n");
    printf("№ | Виробник | Розмір дисплея | Роздільна здатність | Тип процесора | ОП (ГБ) | Тип накопичувача | Обсяг диска (ГБ) | Тип відеокарти | Ємність акумулятора (мАг) | Ціна\n");
    for (int i = 0; i < count; i++) {
        printf("%d | %s | %s | %s | %s | %d | %s | %d | %s | %d | %.2f\n",
               i + 1, laptops[i].manufacturer, laptops[i].displaySize, laptops[i].resolution,
               laptops[i].processorType, laptops[i].ramSize, laptops[i].storageType,
               laptops[i].diskSize, laptops[i].graphicsCardType, laptops[i].batteryCapacity,
               laptops[i].price);
    }
}

void chooseLaptop(const struct Laptop laptops[], int count) {
    int choice;
    printf("Виберіть ноутбук (1 - %d): ", count);
    scanf("%d", &choice);
    if (choice > 0 && choice <= count) {
        printf("\nХарактеристики ноутбука %d:\n", choice);
        printf("Виробник: %s\n", laptops[choice - 1].manufacturer);
        printf("Розмір дисплея: %s\n", laptops[choice - 1].displaySize);
        printf("Роздільна здатність дисплея: %s\n", laptops[choice - 1].resolution);
        printf("Тип процесора: %s\n", laptops[choice - 1].processorType);
        printf("Розмір оперативної пам'яті: %d ГБ\n", laptops[choice - 1].ramSize);
        printf("Тип накопичувача: %s\n", laptops[choice - 1].storageType);
        printf("Обсяг диска: %d ГБ\n", laptops[choice - 1].diskSize);
        printf("Тип відеокарти: %s\n", laptops[choice - 1].graphicsCardType);
        printf("Ємність акумулятора: %d мАг\n", laptops[choice - 1].batteryCapacity);
        printf("Ціна: %.2f\n", laptops[choice - 1].price);
    } else {
        printf("Некоректний вибір.\n");
    }
}

int main() {
    struct Laptop laptops[10];
    int count = 0;

    for (count = 0; count < 10; count++) {
        printf("Введіть дані для ноутбука %d:\n", count + 1);
        inputLaptopData(&laptops[count]);
    }

    printLaptops(laptops, count);
    chooseLaptop(laptops, count);

    return 0;
}
