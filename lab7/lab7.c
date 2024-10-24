#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int sum_recursive(int n) {
    if (n >= 100) {
        return 0;
    }
    return n + sum_recursive(n + 1);
}

double f(double x, int N, int A) {
    return N * x + A; 
}

double find_root(double left, double right, int N, int A) {
    double midpoint;
    while (right - left > 0.0001) {  
        midpoint = (left + right) / 2; 
        if (f(midpoint, N, A) == 0) {
            return midpoint;
        }
        if (f(left, N, A) * f(midpoint, N, A) < 0) {
            right = midpoint;
        }
        else {
            left = midpoint;
        }
    }
    return midpoint; 
}

int main() {

    // Task 2

    //int number;
    //printf("Enter a number: ");
    //scanf_s("%d", &number);

    //if (is_prime(number))
    //    printf_s("Number %d is prime.\n", number);
    //else
    //    printf_s("Number %d is not prime.\n", number);

    // Task 3 
    /*int journal_number;
    printf("Enter your journal number: ");
    scanf_s("%d", &journal_number);

    int sum = sum_recursive(journal_number);
    printf("The sum from %d to 100: %d\n", journal_number, sum);*/

    // Task 4

    int N, A;
    printf("Enter your age: ");
    scanf_s("%d", &N);

    printf("Enter your journal number: ");
    scanf_s("%d", &A);

    double root = find_root(-100, 100, N, A);
    printf("The solution of the equation: x = %.5lf\n", root);
}
