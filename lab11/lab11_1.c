#include <stdio.h>
#include <string.h>

struct Player {
    char surname[50];
    char name[50];
    float height;
    float weight;
    int age;
    char hairColor[20];
};

void inputPlayerData(struct Player* player) {
    printf("Введіть прізвище: ");
    scanf("%s", player->surname);
    printf("Введіть ім'я: ");
    scanf("%s", player->name);
    printf("Введіть зріст (м): ");
    scanf("%f", &player->height);
    printf("Введіть масу (кг): ");
    scanf("%f", &player->weight);
    printf("Введіть вік: ");
    scanf("%d", &player->age);
    printf("Введіть колір волосся: ");
    scanf("%s", player->hairColor);
}

void sortPlayersByAge(struct Player players[], int count) {
    struct Player temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (players[i].age < players[j].age) {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
}

void printPlayers(const struct Player players[], int count) {
    printf("\nСписок гравців у порядку зменшення віку:\n");
    for (int i = 0; i < count; i++) {
        printf("%s %s, Зріст: %.2f м, Маса: %.2f кг, Вік: %d, Колір волосся: %s\n",
               players[i].surname, players[i].name, players[i].height, players[i].weight, players[i].age, players[i].hairColor);
    }
}

int main() {
    struct Player players[10];
    int count = 0;

    for (count = 0; count < 10; count++) {
        printf("Введіть дані для гравця %d:\n", count + 1);
        inputPlayerData(&players[count]);
    }

    sortPlayersByAge(players, count);
    printPlayers(players, count);

    return 0;
}
