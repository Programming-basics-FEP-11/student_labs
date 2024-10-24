#include <stdio.h>
#include <stdbool.h>
bool is_prime(int n) 
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    return true;
}
int recursive(int n)
{
    if (n == 17)
    {
        return 17;  
    } 
    else 
    {
        return n + recursive(n - 1); 
    }
}
double bisectionMethod(int N, int A, double start, double end, double epsilon)
{
    double mid;
    while ((end - start) >= epsilon) 
    {
        mid = (start + end) / 2;
        if (N * mid + A == 0.0)
            break;
        else if (N * mid + A < 0)
            start = mid;
        else
            end = mid;
    }
    return mid;
}    
int main()
{
    int choice;
    printf("Оберіть опцію:\n1. Перевірити число на простоту\n2. Обчислити суму від 17 до числа\n3. Знайти корінь рівняння методом половинного ділення\nВаш вибір: ");
    scanf("%d", &choice);
    
    if (choice == 1) 
    {
        int number;
        printf("Введіть ціле число: ");
        scanf("%d", &number);
        if (is_prime(number)) 
        {
            printf("%d є простим числом\n", number);
        } 
        else 
        {
            printf("%d не є простим числом\n", number);
        }
    } 
    else if (choice == 2) 
    {
        int n;
        printf("Введіть число n (n >= 17): ");
        scanf("%d", &n);
        if (n >= 17) 
        {
            int res = recursive(n);
            printf("Сума чисел від 17 до %d = %d\n", n, res);
        } 
        else 
        {
            printf("Число має бути більше або дорівнювати 17\n");
        }
    } 
    else if (choice == 3) 
    {
        int N, A;
        double start = -100;  
        double end = 100;     
        double epsilon = 0.0001;  
        printf("Введіть порядковий номер у журналі: ");
        scanf("%d", &N);
        printf("Введіть ваш вік: ");
        scanf("%d", &A);
        double result = bisectionMethod(N, A, start, end, epsilon);
        printf("Знайдений розв'язок рівняння: x = %.4lf\n", result);
    } 
    else 
    {
        printf("Невірний вибір\n");
    }
}
