#include <stdio.h>
#include <math.h>

double equation(double N, double A, double x) {
    return N * x + A;
}

double bisection(double N, double A, double left, double right, double tol) {
    double mid;
    while ((right - left) / 2 > tol) {
        mid = (left + right) / 2;
        if (equation(N, A, mid) == 0.0)
            return mid;
        else if (equation(N, A, left) * equation(N, A, mid) < 0)
            right = mid;
        else
            left = mid;
    }
    return (left + right) / 2;
}

int main() {
    double N, A;
    printf("Введіть ваш порядковий номер: ");
    scanf("%lf", &N);
    printf("Введіть ваш вік: ");
    scanf("%lf", &A);

    double left = -100, right = 100, tol = 1e-6;
    double root = bisection(N, A, left, right, tol);
    printf("Розв'язок рівняння %lf * x + %lf = 0: x = %.6lf\n", N, A, root);

    return 0;
}
