#include <stdio.h>

int main(void){
    int i = 0, sum = 0;
    while(i < 100){
        i++;
        if(i == 4 || i == 33) continue;
        sum += i;
    }
    printf("Сума чисел від 0 до 100, не включаючи 4 та 33: %d\n", sum);
    return 0;   
}
 
