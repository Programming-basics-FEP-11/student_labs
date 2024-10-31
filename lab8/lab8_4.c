#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    int rand_nums[20];
    srand(time(NULL));
    int max, min, sum = 0;
    for (int i = 0; i < 20; i++)
    {
        rand_nums[i] = rand() % 100;
        if (i == 0)  max = min = rand_nums[i];
        if (rand_nums[i] > max)
            max = rand_nums[i];
        if (rand_nums[i] < min)
            min = rand_nums[i];
        sum += rand_nums[i];
    }
    printf("сума: %d , мін число: %d , макс число: %d\n", sum, min, max);

    return 0;
}
