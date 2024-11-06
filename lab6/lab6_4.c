#include <stdio.h>

int main(void){
    int N;

    printf("Введіть число від 7 до 12: ");
    scanf("%d", &N);

    if(N < 7 || N > 12){
        printf("треба число від 7 до 12\n");
        return 0;
    }
    double number, sum = 0.0, min, max;
    for(int i = 0; i < N; i++){
        printf("Введіть число %d:", i + 1);
        scanf("%lf", &number);
        sum += number;
        
        if(i == 0){
            min = max = number;
        }
        else{
            if(number < min) min = number;
            if(number > max) max = number;
        }
        
    }

    double average = sum/N;

    printf("Сума: %.2f\n", sum);
    printf("Середнє арифметичне: %.2f\n", average);
    printf("Мінімальне значення: %.2f\n", min);
    printf("Максимальне значення: %.2f\n", max);

    return 0;   
}
 
    
