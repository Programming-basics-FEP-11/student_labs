#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;  // Коефіцієнти квадратного рівняння
    double discriminant, root1, root2;  // Дискримінант і корені рівняння
    // Введення коефіцієнтів
    printf("Введіть коефіцієнт a: ");
    scanf("%lf", &a);
    printf("Введіть коефіцієнт b: ");
    scanf("%lf", &b);
    printf("Введіть коефіцієнт c: ");
    scanf("%lf", &c);
    // Обчислення дискримінанта
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        // Два дійсних корені
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Корені рівняння: root1 = %.2lf, root2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // Один дійсний корінь
        root1 = -b / (2 * a);
        printf("Рівняння має один корінь: root = %.2lf\n", root1);
    } else {
        // Уявні корені
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Корені рівняння є комплексними:\n");
        printf("root1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("root2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
    return 0;
}