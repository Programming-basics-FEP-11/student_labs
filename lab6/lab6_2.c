#include <stdio.h>

int main() {
    int sum = 0;    
    int i = 1;      

    while (i <= 100) {
        if (i == 2 || i == 33) {
            i++;    
            continue;
        }
        sum += i;   
        i++;    
    }

    printf("Сума перших 100 чисел, за винятком 2 і 33: %d\n", sum);

    return 0;
}
