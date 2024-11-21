#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  int id;
  char firstName[50];
  char lastName[50];
};

int comparePersons(const void *x, const void *y) {
  struct Person *personX = (struct Person *)x;
  struct Person *personY = (struct Person *)y;
  return strcmp(personX->firstName, personY->firstName);
}

int main() {
  struct Person people[100];
  int totalPeople = 0;
  int uniqueFirstNames = 0;
  int lastNameLengthSum = 0;

  printf("Введіть кількість осіб: ");
  scanf("%d", &totalPeople);

  for (int i = 0; i < totalPeople; i++) {
    printf("Введіть дані особи %d (ID Прізвище Ім'я): ", i + 1);
    scanf("%d %s %s", &people[i].id, people[i].lastName, people[i].firstName);

    int isNameUnique = 1;
    for (int j = 0; j < i; j++) {
      if (strcmp(people[i].firstName, people[j].firstName) == 0) {
        isNameUnique = 0;
        break;
      }
    }
    uniqueFirstNames += isNameUnique;

    lastNameLengthSum += strlen(people[i].lastName);
  }

  qsort(people, totalPeople, sizeof(struct Person), comparePersons);

  printf("\nСписок осіб в алфавітному порядку:\n");
  for (int i = 0; i < totalPeople; i++) {
    printf("%d %s %s\n", people[i].id, people[i].firstName, people[i].lastName);
  }

  printf("\nКількість унікальних імен: %d\n", uniqueFirstNames);
  printf("Середня довжина прізвища: %.2f\n",
         (double)lastNameLengthSum / totalPeople);

  return 0;
}
