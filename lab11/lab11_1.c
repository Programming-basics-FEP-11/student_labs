#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct team {
    char surname[20];
    char name[20];
    float height;
    float weight;
    int age;
    char hair_col[30];
};

int compareByAge(const void *a, const void *b) {
    struct team *playerA = (struct team *)a;
    struct team *playerB = (struct team *)b;
    return playerB->age - playerA->age; 
}

int main() {
    int numPlayers;
    printf("Введіть кількість гравців: ");
    scanf("%d", &numPlayers);

    struct team players[numPlayers];

    for (int i = 0; i < numPlayers; i++) {
        printf("\nВведіть дані гравця %d:\n", i + 1);
        printf("Surname: ");
        scanf("%s", players[i].surname);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Height (cm): ");
        scanf("%f", &players[i].height);
        printf("Weight (kg): ");
        scanf("%f", &players[i].weight);
        printf("Age: ");
        scanf("%d", &players[i].age);
        printf("Hair color: ");
        scanf(" %[^\n]", players[i].hair_col); 
    }


    
    qsort(players, numPlayers, sizeof(struct team), compareByAge);

    
    printf("\nСписок команди у порядку зменшеня віку:\n");
    for (int i = 0; i < numPlayers; i++) {
        printf("Player %d: %s %s, %.1f cm, %.1f kg, %d years old, Hair: %s\n",
               i + 1, players[i].surname, players[i].name, 
               players[i].height, players[i].weight, 
               players[i].age, players[i].hair_col);
    }
    
    return 0;
}
