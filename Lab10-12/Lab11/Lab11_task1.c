#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Оголошення структури гравця
struct player {
    char name[30];
    char surname[40]; 
    int height;
    int age;
    char hair[20];
};

int main() {

    int count = 0;
    printf("Введіть кількість гравців (більше шести):\n");
    scanf("%d", &count);

    // Перевірка мінімальної кількості гравців
    if (count < 7) {
        printf("Кількість менша аніж 7\n");
        return 0;
    }

    struct player players[count]; // Оголошення масиву гравців

    // Введення даних про гравців
    for (int i = 0; i < count; i++) {
        printf("\nВведіть ім'я %d гравця:\n", i + 1);
        scanf("%s", players[i].name);
        printf("Введіть прізвище гравця:\n");
        scanf("%s", players[i].surname);
        printf("Введіть зріст гравця:\n");
        scanf("%d", &players[i].height);
        printf("Введіть вік гравця:\n");
        scanf("%d", &players[i].age);
        printf("Введіть колір волосся гравця:\n");
        scanf("%s", players[i].hair);
    }

    // Сортування гравців за віком у порядку спадання
    for (int a = 0; a < count - 1; a++) {
        for (int b = 0; b < count - 1 - a; b++) { // Оптимізовано умову
            if (players[b].age < players[b + 1].age) {
                struct player temp = players[b];
                players[b] = players[b + 1];
                players[b + 1] = temp;
            }
        }
    }

    // Виведення відсортованого списку гравців
    printf("\nСписок гравців\n");
    for (int i = 0; i < count; i++) {
        printf("%s %s %d %d %s\n", players[i].name, players[i].surname, players[i].height, players[i].age, players[i].hair);
    }

    return 0;
}
