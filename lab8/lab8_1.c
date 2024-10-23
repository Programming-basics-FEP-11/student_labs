#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInRange(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {

    srand(time(0));
    
    int random_number;
    int ranNums[10];
    for (int i = 0; i < 10; i++) {
        random_number= randomInRange(1, 99);
        ranNums[i] = random_number;
        
        printf("%d " ,ranNums[i]); 
        
    }
    
    return 0;
}
