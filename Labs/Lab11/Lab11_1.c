#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 8 // Кількість гравців

// Структура для опису гравця
typedef struct {
  char surname[50];
  char name[50];
  int height;   // Зріст в сантиметрах
  float weight; // Маса в кг
  int age;      // Вік
  char hairColor[20];
} Player;

// Функція для обміну двох гравців
void swap(Player *a, Player *b) {
  Player temp = *a;
  *a = *b;
  *b = temp;
}

// Функція для сортування гравців за віком у порядку спадання
void sortPlayersByAge(Player players[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (players[j].age < players[j + 1].age) {
        swap(&players[j], &players[j + 1]);
      }
    }
  }
}

int main() {
  Player team[MAX_PLAYERS]; // Масив для гравців

  // Введення даних про гравців
  for (int i = 0; i < MAX_PLAYERS; i++) {
    printf("Введіть дані для гравця %d:\n", i + 1);
    printf("Прізвище: ");
    scanf("%s", team[i].surname);
    printf("Ім'я: ");
    scanf("%s", team[i].name);
    printf("Зріст (см): ");
    scanf("%d", &team[i].height);
    printf("Маса (кг): ");
    scanf("%f", &team[i].weight);
    printf("Вік: ");
    scanf("%d", &team[i].age);
    printf("Колір волосся: ");
    scanf("%s", team[i].hairColor);
    printf("\n");
  }

  // Сортування гравців за віком у порядку спадання
  sortPlayersByAge(team, MAX_PLAYERS);

  // Виведення відсортованого списку
  printf("Список гравців команди у порядку зменшення віку:\n");
  for (int i = 0; i < MAX_PLAYERS; i++) {
    printf(
        "%d. %s %s, Вік: %d, Зріст: %d см, Маса: %.2f кг, Колір волосся: %s\n",
        i + 1, team[i].surname, team[i].name, team[i].age, team[i].height,
        team[i].weight, team[i].hairColor);
  }

  return 0;
}
