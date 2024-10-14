#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_numbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

int main() {
    int arr[10];
    srand(time(0));

    generate_random_numbers(arr, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
