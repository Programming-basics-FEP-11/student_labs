#include <stdio.h>

int main() {
    int n=0;
    int sum=0;
    while(n<=100){
        
        if (n==1 || n==33){
            n++;
            continue;
            
        }
        sum+=n;
        n++;
    }
    printf("Сума чисел від 1 до 100, окрім 1 і 33: \n%d", sum);
        
        
        
        
    return 0;
}