#include <stdio.h>

int* get_element_1d(int arr[], int index) {
    if (index < 0 || index >= 10) {
        return NULL;
    }
    return &arr[index];
}

int* get_element_2d(int arr[][12], int row, int col) {
    if (row < 0 || row >= 12 || col < 0 || col >= 12) {
        return NULL;
    }
    return &arr[row][col];
}

int main() {
    int arr1d[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2d[12][12] = {{0}};

    int* ptr1 = get_element_1d(arr1d, 5);
    if (ptr1) {
        printf("Елемент 1D масиву: %d\n", *ptr1);
    } else {
        printf("Елемент 1D масиву не знайдено.\n");
    }

    int* ptr2 = get_element_2d(arr2d, 3, 4);
    if (ptr2) {
        printf("Елемент 2D масиву: %d\n", *ptr2);
    } else {
        printf("Елемент 2D масиву не знайдено.\n");
    }

    return 0;
}
