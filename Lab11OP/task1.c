#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 15

// Структура для збереження даних про спортсмена
typedef struct {
  char surname[50];
  char name[50];
  float height;
  float weight;
  int age;
  char hair_color[20];
} Player;

void sortPlayers(Player players[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (players[j].age < players[j + 1].age) {
        Player temp = players[j];
        players[j] = players[j + 1];
        players[j + 1] = temp;
      }
    }
  }
}

int main() {
  int n;

  do {
    printf("Введіть кількість спортсменів (від 7+): ", MAX_PLAYERS);
    scanf("%d", &n);

    if (n < 7 || n > MAX_PLAYERS) {
      printf("Некоректна кількість гравців! Спробуйте ще раз.\n");
    }
  } while (n < 7 || n > MAX_PLAYERS);

  Player players[MAX_PLAYERS];

  for (int i = 0; i < n; i++) {
    printf("\nГравець %d:\n", i + 1);
    printf("Прізвище: ");
    scanf("%s", players[i].surname);
    printf("Ім'я: ");
    scanf("%s", players[i].name);
    printf("Зріст (м): ");
    scanf("%f", &players[i].height);
    printf("Маса (кг): ");
    scanf("%f", &players[i].weight);
    printf("Вік: ");
    scanf("%d", &players[i].age);
    printf("Колір волосся: ");
    scanf("%s", players[i].hair_color);
  }

  sortPlayers(players, n);

  printf("\nСписок спортсменів у порядку зменшення віку:\n");
  for (int i = 0; i < n; i++) {
    printf("%s %s, Вік: %d, Зріст: %.2f м, Маса: %.2f кг, Колір волосся: %s\n",
           players[i].surname, players[i].name, players[i].age,
           players[i].height, players[i].weight, players[i].hair_color);
  }

  return 0;
}
