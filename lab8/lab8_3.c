#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int *d1(int mas[], int index)
{
    if (index >= 0 && index < 10)
    {
        return &mas[index];
    }
    else
    {
        return NULL;
    }
}
int *d2(int mas[12][12], int row, int column)
{
    if (row >= 0 && row < 12 && column >= 0 && column < 12)
    {
        return &mas[row][column];
    }
    else
    {
        return NULL;
    }
}

int main(void)
{
    int mas_d1[10] = {93, 12, 17, 18, 44, 77, 5, 85, 10, 64};
    int mas_d2[12][12];
    srand(time(NULL));
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            mas_d2[i][j] = rand() % 100;
        }
    }
    int index;
    printf("введіть індекс елементу для одномірного масиву, від 0 до 9:");
    scanf("%d", &index);
    int *value = d1(mas_d1, index);
    value ? printf("елемент з індексом %d = %d\n", index, *value) : printf("NULL\n");

    int row, column;
    printf("введіть індекси рядка та стовпця для двомірного масиву, від 0 до 11:");
    scanf("%d %d", &row, &column);
    int *value1 = d2(mas_d2, row, column);
    value1 ? printf("елемент з індексом рядка %d та індексом стовпця %d = %d\n", row, column, *value1) : printf("NULL\n");

    return 0;
}
