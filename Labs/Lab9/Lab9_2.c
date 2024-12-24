#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *str1, char *str2);
void swapd(int *d1, int *d2);
int isDuplicate(int numm[], char name[][50], char surname[][50], int count, int newNum, char *newName, char *newSurname);
int isNumberDuplicate(int numm[], int count, int newNum);

int main() {
  int studCount;
  printf("\nВведіть кількість студентів:\n");
  scanf("%d", &studCount);
  if (studCount < 10) {
    printf("Кількість має бути не менше 10\n");
    return 0;
  }

  int numm[studCount];
  char name[studCount][50];
  char surname[studCount][50];

  printf("\nВведіть список групи (англійською) у форматі:\n");
  printf("номер прізвище ім'я\n");

  for (int a = 0; a < studCount; a++) {
    int isDuplicateEntry = 1;
    while (isDuplicateEntry) {
      scanf("%d%s%s", &numm[a], surname[a], name[a]);

      if (isNumberDuplicate(numm, a, numm[a])) {
        printf("Цей номер вже введено. Введіть інший номер:\n");
      } else if (isDuplicate(numm, name, surname, a, numm[a], name[a], surname[a])) {
        printf("Ця комбінація номер-ім'я-прізвище вже введена. Введіть інші дані:\n");
      } else {
        isDuplicateEntry = 0;
      }
    }
  }

  char diferentNames[studCount][50];
  strcpy(diferentNames[0], name[0]);
  int massEnd = 1;
  for (int a = 1; a < studCount; a++) {
    int compareResult = 0;
    for (int b = 0; b < massEnd; b++) {
      if (strcmp(name[a], diferentNames[b]) == 0) {
        compareResult = 1;
        break;
      }
    }
    if (compareResult == 0) {
      strcpy(diferentNames[massEnd], name[a]);
      massEnd++;
    }
  }
  printf("\nКількість різних імен = %d\n", massEnd);

  int summ = 0;
  int middle = 0;
  for (int a = 0; a < studCount; a++) {
    summ += strlen(surname[a]);
  }
  middle = summ / studCount;
  printf("Середня довжина прізвищ = %d\n", middle);

  for (int a = 0; a < studCount - 1; a++) {
    for (int b = 0; b < studCount - 1; b++) {
      if (strcmp(surname[b], surname[b + 1]) > 0) {
        swap(surname[b], surname[b + 1]);
        swap(name[b], name[b + 1]);
        swapd(&numm[b], &numm[b + 1]);
      }
    }
  }

  for (int a = 0; a < studCount; a++) {
    printf("%d %s %s\n", numm[a], surname[a], name[a]);
  }
}

void swap(char *str1, char *str2) {
  char trash[50];
  strcpy(trash, str1);
  strcpy(str1, str2);
  strcpy(str2, trash);
}

void swapd(int *d1, int *d2) {
  int trash = *d1;
  *d1 = *d2;
  *d2 = trash;
}

int isDuplicate(int numm[], char name[][50], char surname[][50], int count, int newNum, char *newName, char *newSurname) {
  for (int i = 0; i < count; i++) {
    if (numm[i] == newNum || (strcmp(name[i], newName) == 0 && strcmp(surname[i], newSurname) == 0)) {
      return 1;
    }
  }
  return 0;
}

int isNumberDuplicate(int numm[], int count, int newNum) {
  for (int i = 0; i < count; i++) {
    if (numm[i] == newNum) {
      return 1;
    }
  }
  return 0;
}
