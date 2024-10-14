#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void find_max_min_sum(int arr[], int size, int *max, int *min, int *sum) {
    *max = arr[0];
    *min = arr[0];
    *sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
        *sum += arr[i];
    }
}

int main() {
    int arr[20];
    srand(time(0));

    for (int i = 0; i < 20; i++) {
        arr[i] = rand() % 100;
    }

    int max, min, sum;
    find_max_min_sum(arr, 20, &max, &min, &sum);

    printf("Максимальний елемент: %d\n", max);
    printf("Мінімальний елемент: %d\n", min);
    printf("Сума елементів: %d\n", sum);

    return 0;
}
