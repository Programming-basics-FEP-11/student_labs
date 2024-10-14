    #include <stdio.h>
    #include <math.h>
    // Функція для перевірки, чи є трикутник прямокутним
    int isRightTriangle(float a, float b, float c) {
        if (fabs(a*a + b*b - c*c) < 0.0001 || fabs(a*a + c*c - b*b) < 0.0001 || fabs(b*b + c*c - a*a) < 0.0001) {
            return 1;
        }
        return 0;
    }
    // Функція для перевірки, чи є трикутник тупокутним
    int isObtuseTriangle(float a, float b, float c) {
        if ((a*a > b*b + c*c) || (b*b > a*a + c*c) || (c*c > a*a + b*b)) {
            return 1;
        }
        return 0;
    }
    int main() {
        float a, b, c;
        // Введення сторін трикутника
        printf("Введіть довжини трьох сторін трикутника: ");
        scanf("%f %f %f", &a, &b, &c);
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c) {
                printf("Трикутник є рівностороннім.\n");
            } else if (a == b || b == c || a == c) {
                printf("Трикутник є рівнобедреним.\n");
            } else {
                printf("Трикутник є різностороннім.\n");
            }
            if (isRightTriangle(a, b, c)) {
                printf("Трикутник є прямокутним.\n");
            } else if (isObtuseTriangle(a, b, c)) {
                printf("Трикутник є тупокутним.\n");
            } else {
                printf("Трикутник є гострокутним.\n");
            }
        } else {
            printf("Цей трикутник не існує (порушено нерівність трикутника).\n");
        }

        return 0;
    }
