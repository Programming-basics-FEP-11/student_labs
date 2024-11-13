#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char lastName[50];
    char firstName[50];
    int height;
    int weight;
    int age;
    char hairColor[20];
} Player;

typedef struct {
    char manufacturer[50];
    double screenSize;
    char resolution[20];
    char processor[50];
    int ramSize;
    char storageType[20];
    int storageSize;
    double price;
} Laptop;

 
void autoFillPlayers(Player* players, int numPlayers) {
    const char* lastNames[] = { "Smith", "Johnson", "Williams", "Brown", "Jones" };
    const char* firstNames[] = { "John", "David", "Michael", "Chris", "James" };
    const char* hairColors[] = { "Black", "Brown", "Blonde", "Red", "Gray" };

    for (int i = 0; i < numPlayers; i++) {
        strcpy(players[i].lastName, lastNames[i % 5]);
        strcpy(players[i].firstName, firstNames[i % 5]);
        players[i].height = 150 + rand() % 50;   
        players[i].weight = 50 + rand() % 50;   
        players[i].age = 18 + rand() % 22;     
        strcpy(players[i].hairColor, hairColors[i % 5]);
    }
}

 
void autoFillLaptops(Laptop* laptops, int numLaptops) {
    const char* manufacturers[] = { "Dell", "HP", "Apple", "Lenovo", "Asus" };
    const char* resolutions[] = { "1920x1080", "1366x768", "2560x1440", "3840x2160" };
    const char* processors[] = { "i5", "i7", "i9", "Ryzen 5", "Ryzen 7" };
    const char* storageTypes[] = { "HDD", "SSD" };

    for (int i = 0; i < numLaptops; i++) {
        strcpy(laptops[i].manufacturer, manufacturers[i % 5]);
        laptops[i].screenSize = 13.0 + (rand() % 8);  
        strcpy(laptops[i].resolution, resolutions[i % 4]);
        strcpy(laptops[i].processor, processors[i % 5]);
        laptops[i].ramSize = 4 + (rand() % 5) * 4;    
        strcpy(laptops[i].storageType, storageTypes[i % 2]);
        laptops[i].storageSize = 128 + (rand() % 5) * 128; 
        laptops[i].price = 500 + (rand() % 15) * 100;  
    }
}

 
void displayPlayers(Player* players, int numPlayers) {
    for (int i = 0; i < numPlayers - 1; i++) {
        for (int j = i + 1; j < numPlayers; j++) {
            if (players[i].age < players[j].age) {
                Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    printf("\nTeam sorted by age (descending):\n");
    for (int i = 0; i < numPlayers; i++) {
        printf("%s %s, Age: %d, Height: %d, Weight: %d, Hair Color: %s\n",
            players[i].lastName, players[i].firstName, players[i].age,
            players[i].height, players[i].weight, players[i].hairColor);
    }
}

 
void displayLaptops(Laptop* laptops, int numLaptops) {
    char targetManufacturer[50];
    int minRamSize;
    double maxPrice;

    printf("\nEnter filter criteria (Manufacturer, Minimum RAM Size, Maximum Price):\n");
    scanf("%s %d %lf", targetManufacturer, &minRamSize, &maxPrice);

    printf("\nLaptops that meet the criteria:\n");
    for (int i = 0; i < numLaptops; i++) {
        if (strcmp(laptops[i].manufacturer, targetManufacturer) == 0 &&
            laptops[i].ramSize >= minRamSize &&
            laptops[i].price <= maxPrice) {
            printf("%s, Screen: %.1f\", %s, %s, %dGB RAM, %s %dGB, $%.2f\n",
                laptops[i].manufacturer, laptops[i].screenSize, laptops[i].resolution,
                laptops[i].processor, laptops[i].ramSize, laptops[i].storageType,
                laptops[i].storageSize, laptops[i].price);
        }
    }
}

int main() {
    srand(time(NULL));  

    int numPlayers, numLaptops;

    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);
    Player* players = (Player*)malloc(numPlayers * sizeof(Player));
    autoFillPlayers(players, numPlayers);
    displayPlayers(players, numPlayers);

    printf("\nEnter the number of laptops: ");
    scanf("%d", &numLaptops);
    Laptop* laptops = (Laptop*)malloc(numLaptops * sizeof(Laptop));
    autoFillLaptops(laptops, numLaptops);
    displayLaptops(laptops, numLaptops);

  
    free(players);
    free(laptops);

   
}
