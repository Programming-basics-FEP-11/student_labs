
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 60
#define MAX_NAME_LENGTH 25

typedef struct {
    char surname[MAX_NAME_LENGTH];
    char initials[MAX_NAME_LENGTH];
    char favorite_color[MAX_NAME_LENGTH];
} Student;

void printTable(Student students[], int count) {
    printf(" %-20s  %-10s  %-20s \n", "Прізвище", "Ініціали", "Улюблений колір");
    printf("__________________________________________________\n");
    for (int i = 0; i < count; i++) {
        printf(" %-20s  %-15s  %-20s \n", students[i].surname, students[i].initials, students[i].favorite_color);
    }
    printf("__________________________________________________\n");
}

int main() {
    int n;
    Student students[MAX_STUDENTS];

    printf("Введіть кількість студентів: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Введіть прізвище студента %d: ", i + 1);
        fgets(students[i].surname, MAX_NAME_LENGTH, stdin);
        students[i].surname[strcspn(students[i].surname, "\n") ] = 0; 
        printf("Введіть ініціали студента %d: ", i + 1);
        fgets(students[i].initials, MAX_NAME_LENGTH, stdin);
        students[i].initials[strcspn(students[i].initials, "\n" ) ] = 0; 
        printf("Введіть улюблений колір студента %d: ", i + 1);
        fgets(students[i].favorite_color, MAX_NAME_LENGTH, stdin);
        students[i].favorite_color[strcspn(students[i].favorite_color, "\n") ] = 0; 
        printf("\n");
    }
    printf("\nСписок студентів:\n");
     printf("__________________________________________________\n");
    printTable(students, n);

    return 0;
} 
