#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char lastName[50], firstName[50], hairColor[20];
    float height, weight;
    int age;
} Player;

void sortByAge(Player players[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (players[j].age < players[j + 1].age) {
                Player temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
}

void displayPlayers(Player players[], int size) {
    printf("\n%-10s | %-10s | %-6s | %-6s | %-3s | %-10s\n", 
           "Прізвище", "Ім'я", "Зріст", "Вага", "Вік", "Колір волосся");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < size; i++)
        printf("%-10s | %-10s | %.2f  | %.2f  | %-3d | %-10s\n",
               players[i].lastName, players[i].firstName,
               players[i].height, players[i].weight,
               players[i].age, players[i].hairColor);
}

int main() {
    int numPlayers;

    do {
        printf("Введіть кількість гравців (не менше 7): ");
        scanf("%d", &numPlayers);
        if (numPlayers < 7)
            printf("Кількість гравців повинна бути не менше 7. Спробуйте ще раз.\n");
    } while (numPlayers < 7);

    Player *players = malloc(numPlayers * sizeof(Player));
    if (!players) {
        printf("Помилка виділення пам'яті!\n");
        return 1;
    }

    for (int i = 0; i < numPlayers; i++) {
        printf("\nГравець %d:\n", i + 1);
        printf("Прізвище: "); scanf("%s", players[i].lastName);
        printf("Ім'я: "); scanf("%s", players[i].firstName);
        printf("Зріст (см): "); scanf("%f", &players[i].height);
        printf("Вага (кг): "); scanf("%f", &players[i].weight);
        printf("Вік: "); scanf("%d", &players[i].age);
        printf("Колір волосся: "); scanf("%s", players[i].hairColor);
    }

    sortByAge(players, numPlayers);
    displayPlayers(players, numPlayers);

    free(players);
    return 0;
}
