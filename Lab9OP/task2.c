#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

typedef struct {
    int number;
    char surname[MAX_NAME_LENGTH];
    char name[MAX_NAME_LENGTH];
} Participant;

void sortParticipants(Participant participants[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(participants[i].name, participants[j].name) > 0) {
                Participant temp = participants[i];
                participants[i] = participants[j];
                participants[j] = temp;
            }
        }
    }
}

int countUniqueNames(Participant participants[], int count) {
    char uniqueNames[count][MAX_NAME_LENGTH];
    int uniqueCount = 0;

    for (int i = 0; i < count; i++) {
        int found = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (strcmp(participants[i].name, uniqueNames[j]) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(uniqueNames[uniqueCount], participants[i].name);
            uniqueCount++;
        }
    }
    return uniqueCount;
}

double calculateAverageSurnameLength(Participant participants[], int count) {
    int totalLength = 0;
    for (int i = 0; i < count; i++) {
        totalLength += strlen(participants[i].surname);
    }
    return (double)totalLength / count;
}

int main() {
    int numParticipants;

    printf("Enter the number of participants (at least 10): ");
    scanf("%d", &numParticipants);

    if (numParticipants < 10) {
        printf("The number of participants must be at least 10.\n");
        return 1;
    }

    Participant participants[numParticipants];

    printf("Enter the list of participants in the format (Number Surname Name):\n");
    for (int i = 0; i < numParticipants; i++) {
        printf("Participant %d: ", i + 1);
        scanf("%d %s %s", &participants[i].number, participants[i].surname, participants[i].name);
    }

    // 1) Calculate unique names and average surname length
    int uniqueNames = countUniqueNames(participants, numParticipants);
    double avgSurnameLength = calculateAverageSurnameLength(participants, numParticipants);

    printf("\nNumber of unique names: %d\n", uniqueNames);
    printf("Average surname length: %.2f\n", avgSurnameLength);

    // 2) Sort and display participants
    sortParticipants(participants, numParticipants);

    printf("\nSorted participants (Number-Name-Surname):\n");
    for (int i = 0; i < numParticipants; i++) {
        printf("%d %s %s\n", participants[i].number, participants[i].name, participants[i].surname);
    }

    return 0;
}
