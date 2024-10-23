#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInRange(int min, int max) {
    return min + rand() % (max - min + 1);
}
int random_number;
int ranNums[20];

int main() {
    int min, max;
    srand(time(0));
    printf("20 випадкових чисел з діапазону [0, 99]:\n");
  
    for (int el=0; el<20; el++) {
        random_number= randomInRange(1, 99);
        ranNums[el] = random_number;
        printf("%d ", ranNums[el]);
        if (el == 0) {
          min = random_number;
          max = random_number;}
        else {
          if (random_number < min)
          min = random_number;
           if (random_number > max)
          max = random_number; }

    }
    printf("\nМінімальний елемент: %d\n максимальний: %d\n", min, max);
    printf("Їх сума: %d\n", min+max);
    return 0;
}
