#include <stdio.h>
#include <string.h>

#define NUM_LAPTOPS 8 // Кількість ноутбуків

typedef struct {
  char manufacturer[50];
  float screenSize;
  char resolution[20];
  char processorType[50];
  int ramSize;
  char storageType[20];
  int storageSize;
  char gpuType[50];
  int batteryCapacity;
  float price;
} Laptop;

// Функція для введення рядка з пробілами
void inputString(char *prompt, char *str, int size) {
  printf("%s", prompt);
  fgets(str, size, stdin);
  str[strcspn(str, "\n")] = '\0'; // Видалення символу нового рядка
}

void displayLaptop(Laptop laptop, int index) {
  printf("Ноутбук %d:\n", index + 1);
  printf("Виробник: %s\n", laptop.manufacturer);
  printf("Розмір дисплея: %.1f дюймів\n", laptop.screenSize);
  printf("Роздільна здатність дисплея: %s\n", laptop.resolution);
  printf("Тип процесора: %s\n", laptop.processorType);
  printf("Розмір оперативної пам’яті: %d ГБ\n", laptop.ramSize);
  printf("Тип накопичувача: %s\n", laptop.storageType);
  printf("Обсяг диска: %d ГБ\n", laptop.storageSize);
  printf("Тип відеокарти: %s\n", laptop.gpuType);
  printf("Ємність акумулятора: %d мАг\n", laptop.batteryCapacity);
  printf("Ціна: %.2f\n", laptop.price);
  printf("--------------------------------\n");
}

int main() {
  Laptop laptops[NUM_LAPTOPS];
  char tempBuffer[100]; // Буфер для введення числових даних

  // Введення даних про ноутбуки
  printf("Введіть дані про %d ноутбуків:\n", NUM_LAPTOPS);
  for (int i = 0; i < NUM_LAPTOPS; i++) {
    printf("Ноутбук %d:\n", i + 1);
    inputString("Виробник: ", laptops[i].manufacturer,
                sizeof(laptops[i].manufacturer));
    printf("Розмір дисплея (в дюймах): ");
    fgets(tempBuffer, sizeof(tempBuffer), stdin);
    sscanf(tempBuffer, "%f", &laptops[i].screenSize);
    inputString("Роздільна здатність дисплея: ", laptops[i].resolution,
                sizeof(laptops[i].resolution));
    inputString("Тип процесора: ", laptops[i].processorType,
                sizeof(laptops[i].processorType));
    printf("Розмір оперативної пам’яті (в ГБ): ");
    fgets(tempBuffer, sizeof(tempBuffer), stdin);
    sscanf(tempBuffer, "%d", &laptops[i].ramSize);
    inputString("Тип накопичувача (HDD/SSD): ", laptops[i].storageType,
                sizeof(laptops[i].storageType));
    printf("Обсяг диска (в ГБ): ");
    fgets(tempBuffer, sizeof(tempBuffer), stdin);
    sscanf(tempBuffer, "%d", &laptops[i].storageSize);
    inputString("Тип відеокарти: ", laptops[i].gpuType,
                sizeof(laptops[i].gpuType));
    printf("Ємність акумулятора (в мАг): ");
    fgets(tempBuffer, sizeof(tempBuffer), stdin);
    sscanf(tempBuffer, "%d", &laptops[i].batteryCapacity);
    printf("Ціна: ");
    fgets(tempBuffer, sizeof(tempBuffer), stdin);
    sscanf(tempBuffer, "%f", &laptops[i].price);
    printf("--------------------------------\n");
  }

  // Виведення таблиці з усіма ноутбуками
  printf("Таблиця ноутбуків:\n");
  for (int i = 0; i < NUM_LAPTOPS; i++) {
    printf("%d. Виробник: %s | Розмір дисплея: %.1f\" | Роздільна здатність: "
           "%s | Ціна: %.2f\n",
           i + 1, laptops[i].manufacturer, laptops[i].screenSize,
           laptops[i].resolution, laptops[i].price);
  }

  // Вибір ноутбука
  int choice;
  printf("\nОберіть номер ноутбука (1-%d), щоб переглянути його параметри: ",
         NUM_LAPTOPS);
  fgets(tempBuffer, sizeof(tempBuffer), stdin);
  sscanf(tempBuffer, "%d", &choice);

  if (choice >= 1 && choice <= NUM_LAPTOPS) {
    displayLaptop(laptops[choice - 1], choice - 1);
  } else {
    printf("Некоректний вибір! Спробуйте знову.\n");
  }

  return 0;
}
