#include <stdio.h>
#include <math.h>

#define TOLERANCE 0.0001

double equation(double x, int N, int A) {
    return N * x + A;
}

double bisection(double a, double b, int N, int A) {
    double midpoint;

    while ((b - a) >= TOLERANCE) {
        midpoint = (a + b) / 2.0;

        if (fabs(equation(midpoint, N, A)) < TOLERANCE) {
            return midpoint;
        }

        if (equation(a, N, A) * equation(midpoint, N, A) < 0) {
            b = midpoint;
        } else {
            a = midpoint;
        }
    }

    return midpoint;
}

int main() {
    int N = 2;
    int A = 17;

    double a = -100, b = 100;
    double root = bisection(a, b, N, A);

    printf("Розв'язок рівняння 2*x + 17 = 0: x = %.5f\n", root);

    return 0;
}
