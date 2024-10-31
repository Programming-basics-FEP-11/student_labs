#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{ 
    int rand_nums[10];
    srand(time(NULL));
    
    for(int i = 0; i < 10; i++){
        rand_nums[i] = rand() % 100;
        printf("%d ", rand_nums[i]);
    }
    
    return 0; 
}