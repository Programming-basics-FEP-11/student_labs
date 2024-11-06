#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_array(int size) {
    int array[size];
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }
    printf("\n");
}

int* get_element_pointer(int* array, int index, int size) {
    if (index >= 0 && index < size) {
        return &array[index];
    }
    return NULL;
}

int* get_element_pointer_2d(int array[12][12], int row, int col) {
    if (row >= 0 && row < 12 && col >= 0 && col < 12) {
        return &array[row][col];
    }
    return NULL;
}

void find_min_max_and_sum(int size) {
    int array[size];
    int min, max, sum = 0;

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
        sum += array[i];
        if (i == 0 || array[i] < min) min = array[i];
        if (i == 0 || array[i] > max) max = array[i];
        printf("%d ", array[i]);
    }
    printf("\nMin: %d, Max: %d, Sum: %d\n", min, max, sum);
}

int main() {
    srand(time(NULL));

    //Task 1
    printf("Task 1 - Array of 10 random numbers:\n");
    generate_random_array(10);

    //Task 2
    int array1d[10];
    for (int i = 0; i < 10; i++) array1d[i] = rand() % 100;
    int* element_ptr = get_element_pointer(array1d, 5, 10);
    printf("Task 2 - Element in 1D array at index 5: ");
    if (element_ptr) {
        printf("%d\n", *element_ptr);
    }
    else {
        printf("not found.\n");
    }

    int array2d[12][12];
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            array2d[i][j] = rand() % 100;
    int* element_ptr_2d = get_element_pointer_2d(array2d, 5, 10);
    printf("Task 2 - Element in 2D array at [5][10]: ");
    if (element_ptr_2d) {
        printf("%d\n", *element_ptr_2d);
    }
    else {
        printf("not found.\n");
    }

    //Task 3
    printf("\nTask 3 - Array of 20 random numbers:\n");
    find_min_max_and_sum(20);

  
}
