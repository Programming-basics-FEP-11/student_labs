#include <stdio.h>
#include <math.h>
int is_prime(int a) {
    if(a > 1){
        for(int i = 2; i <= sqrt(a); i++){
            if(a % i == 0){
                return 0;
            }
        }
        return 1;
    }
    else return 0;
}
int main(void) {
    int num;
    printf("введіть число: ");
    scanf("%d", &num);
    is_prime(num) == 1 ? printf("число просте\n") : printf("число не є просте\n");
    return 0;
} 
 
