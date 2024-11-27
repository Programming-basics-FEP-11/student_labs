#include <stdio.h>
#include <string.h>

typedef struct {
    char surname[47];
    char name[47];
    int age;
    float height;
    float weight;
    char hairColor[47];
} Player;

typedef struct {
    char manufacturer[47];
    float screenSize;
    char resolution[47];
    char processorType[47];
    int ramSize;
    char storageType[47];
    int diskSize;
    char graphicsCard[47];
    int batteryCapacity;
    float price;
} Laptop;

void inputPlayer(Player* player) {
    printf("Surname: ");
    scanf("%s", player->surname);
    printf("Name: ");
    scanf("%s", player->name);
    printf("Age: ");
    scanf("%d", &player->age);
    printf("Height (cm): ");
    scanf("%f", &player->height);
    printf("Weight (kg): ");
    scanf("%f", &player->weight);
    printf("Hair Color: ");
    scanf("%s", player->hairColor);
}

void inputLaptop(Laptop* laptop) {
    printf("Manufacturer: ");
    getchar();
    fgets(laptop->manufacturer, sizeof(laptop->manufacturer), stdin);
    laptop->manufacturer[strcspn(laptop->manufacturer, "\n")] = 0;

    printf("Screen Size (inches): ");
    scanf("%f", &laptop->screenSize);

    printf("Resolution: ");
    scanf("%s", laptop->resolution);

    printf("Processor Type: ");
    getchar();
    fgets(laptop->processorType, sizeof(laptop->processorType), stdin);
    laptop->processorType[strcspn(laptop->processorType, "\n")] = 0;

    printf("RAM Size (GB): ");
    scanf("%d", &laptop->ramSize);

    printf("Storage Type: ");
    scanf("%s", laptop->storageType);

    printf("Disk Size (GB): ");
    scanf("%d", &laptop->diskSize);

    printf("Graphics Card: ");
    getchar();
    fgets(laptop->graphicsCard, sizeof(laptop->graphicsCard), stdin);
    laptop->graphicsCard[strcspn(laptop->graphicsCard, "\n")] = 0;

    printf("Battery Capacity (mAh): ");
    scanf("%d", &laptop->batteryCapacity);

    printf("Price: ");
    scanf("%f", &laptop->price);
}

void sortPlayers(Player players[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (players[j].age > players[i].age) {
                Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
}

void printPlayers(Player players[], int n) {
    printf("\nSorted list of players by age:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s %s, Age: %d, Height: %.2f cm, Weight: %.2f kg, Hair Color: %s\n",
            i + 1, players[i].surname, players[i].name, players[i].age, players[i].height, players[i].weight, players[i].hairColor);
    }
}

void sortLaptops(Laptop laptops[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (laptops[j].price < laptops[i].price) {
                Laptop temp = laptops[i];
                laptops[i] = laptops[j];
                laptops[j] = temp;
            }
        }
    }
}

void printLaptop(Laptop laptop) {
    printf("\nManufacturer: %s\n", laptop.manufacturer);
    printf("Screen Size: %.2f inches\n", laptop.screenSize);
    printf("Resolution: %s\n", laptop.resolution);
    printf("Processor Type: %s\n", laptop.processorType);
    printf("RAM Size: %d GB\n", laptop.ramSize);
    printf("Storage Type: %s\n", laptop.storageType);
    printf("Disk Size: %d GB\n", laptop.diskSize);
    printf("Graphics Card: %s\n", laptop.graphicsCard);
    printf("Battery Capacity: %d mAh\n", laptop.batteryCapacity);
    printf("Price: %.2f\n", laptop.price);
}

void printLaptops(Laptop laptops[], int n) {
    printf("\nSorted list of laptops by price:\n");
    for (int i = 0; i < n; i++) {
        printf("\nID: %d", i);
        printLaptop(laptops[i]);
    }
}

void chooseLaptop(Laptop laptops[], int n) {
    int choice;
    printf("\nPlease choose a laptop by ID (0 to %d): ", n - 1);
    scanf("%d", &choice);

    if (choice >= 0 && choice < n) {
        printLaptop(laptops[choice]);
    }
    else {
        printf("Invalid choice.\n");
    }
}

int main() {

    Player players[47];
    int n;
    printf("Enter the number of players: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter data for player %d:\n", i + 1);
        inputPlayer(&players[i]);
    }

    sortPlayers(players, n);
    printPlayers(players, n);


    Laptop laptops[47];
    int n1;
    printf("\nEnter the number of laptops: ");
    scanf("%d", &n1);

    for (int i = 0; i < n1; i++) {
        printf("\nEnter details for laptop %d:\n", i + 1);
        inputLaptop(&laptops[i]);
    }

    sortLaptops(laptops, n1);
    printLaptops(laptops, n1);

    chooseLaptop(laptops, n1);


}
