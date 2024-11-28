#include <stdio.h>
#include <string.h>
struct Laptop {
    char manufacturer[50];
    float displaySize;
    char displayResolution[20];
    char CPU[50];
    int RAM; 
    char storageType[10];
    int storageSize; 
    char GPU[50];
    int batteryCapacity;
    float price; 
};
int main() {
    struct Laptop laptops[] = {
        {"Dell", 15.6, "1920x1080", "Intel i7", 16, "SSD", 512, "NVIDIA RTX 3050", 6000, 1200.00},
        {"HP", 14.0, "1366x768", "Intel i5", 8, "HDD", 1000, "Intel UHD 620", 4000, 700.00},
        {"Lenovo", 17.3, "2560x1440", "AMD Ryzen 7", 16, "SSD", 1024, "AMD Radeon RX 6600M", 7500, 1500.00},
        {"Asus", 15.6, "1920x1080", "Intel i9", 32, "SSD", 2048, "NVIDIA RTX 4080", 8000, 2500.00},
        {"Acer", 13.3, "1920x1080", "Intel i3", 4, "HDD", 500, "Intel UHD 600", 3000, 400.00},
        {"Apple", 13.0, "2560x1600", "Apple M1", 8, "SSD", 256, "Apple GPU", 5000, 1300.00},
        {"MSI", 15.6, "1920x1080", "Intel i7", 16, "SSD", 1024, "NVIDIA GTX 1660Ti", 6000, 1100.00},
        {"Samsung", 14.0, "1920x1080", "Intel i5", 8, "SSD", 256, "Intel Iris Xe", 5000, 800.00}
    };
    int numLaptops = sizeof(laptops) / sizeof(laptops[0]);
    int choice;

    printf("Доступні ноутбуки:\n");
    for (int i = 0; i < numLaptops; i++) {
        printf("%d. %s\n", i + 1, laptops[i].manufacturer);
    }

    printf("\nВведіть номер ноутбука, щоб переглянути його характеристики: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > numLaptops) {
        printf("Неправильний вибір!\n");
    } else {
        struct Laptop selected = laptops[choice - 1];
        printf("\nХарактеристики ноутбука %s:\n", selected.manufacturer);
        printf("Розмір дисплея: %.1f дюймів\n", selected.displaySize);
        printf("Роздільна здатність дисплея: %s\n", selected.displayResolution);
        printf("Тип процесора: %s\n", selected.CPU);
        printf("Обсяг оперативної пам'яті: %d GB\n", selected.RAM);
        printf("Тип накопичувача: %s\n", selected.storageType);
        printf("Обсяг диска: %d GB\n", selected.storageSize);
        printf("Тип відеокарти: %s\n", selected.GPU);
        printf("Ємність акумулятора: %d мАг\n", selected.batteryCapacity);
        printf("Ціна: $%.2f\n", selected.price);
    }
}











#include <stdio.h>
#include <string.h>
#define MAX_PLAYERS 100
#define MAX_LEN 100
struct Player
{
    char surname[MAX_LEN];
    char name[MAX_LEN];
    int height;
    float mass;
    int age;
    char haircut[MAX_LEN];
};
void sortPlayersByAge(struct Player players[], int count)
{
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (players[j].age < players[j + 1].age) {
                struct Player temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}
int main()
{
    struct Player players[MAX_PLAYERS];
    int playerCount;
    printf("Введіть кількість гравців (мінімум 7, максимум %d): ", MAX_PLAYERS);
    scanf("%d", &playerCount);
    if (playerCount < 3 || playerCount > MAX_PLAYERS) {
        printf("Неправильна кількість гравців.\n");
        return 1;
    }
    for (int i = 0; i < playerCount; i++)
    {
        printf("\nГравець %d\n", i + 1);

        printf("Введіть прізвище: ");
        scanf("%s", players[i].surname);

        printf("Введіть ім'я: ");
        scanf("%s", players[i].name);

        printf("Введіть зріст (у см): ");
        scanf("%d", &players[i].height);

        printf("Введіть вагу (у кг): ");
        scanf("%f", &players[i].mass);

        printf("Введіть вік: ");
        scanf("%d", &players[i].age);

        printf("Введіть колір волосся: ");
        scanf("%s", players[i].haircut);
    }
    sortPlayersByAge(players, playerCount);
    printf("\nСписок команди (за зменшенням віку):\n");
    for (int i = 0; i < playerCount; i++) {
        printf("Гравець %d: %s %s, Вік: %d, Зріст: %d см, Вага: %.2f кг, Колір волосся: %s\n",
               i + 1, players[i].surname, players[i].name, players[i].age,
               players[i].height, players[i].mass, players[i].haircut);
    }
}
