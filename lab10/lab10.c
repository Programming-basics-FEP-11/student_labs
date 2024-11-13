#include <stdio.h>
#include <stdlib.h>

  
int task2_string_length(const char* str) {
    int length = 0;
    while (*str++) length++;
    return length;
}

 
int* task3_toPoint(int x, int y) {
    int* point = (int*)malloc(2 * sizeof(int));
    point[0] = x;
    point[1] = y;
    return point;
}

 
double task4_add(double a, double b) { return a + b; }
double task4_subtract(double a, double b) { return a - b; }
double task4_multiply(double a, double b) { return a * b; }
double task4_divide(double a, double b) { return b != 0 ? a / b : 0; }

int main() {
    // Task 2 
    char testStr[] = "test";
    printf("Task 2: Length of \"%s\": %d\n", testStr, task2_string_length(testStr));

    // Task 3 
    int* point = task3_toPoint(3, 4);
    printf("Task 3: Point: (%d, %d)\n", point[0], point[1]);
    free(point);

    // Task 4 
    double (*operations[])(double, double) = { task4_add, task4_subtract, task4_multiply, task4_divide };
    double num1, num2;
    char op;

    printf("Task 4: Enter operation: ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    double result;
    if (op == '+') result = operations[0](num1, num2);
    else if (op == '-') result = operations[1](num1, num2);
    else if (op == '*') result = operations[2](num1, num2);
    else if (op == '/') result = operations[3](num1, num2);
    else {
        printf("Invalid operator.\n");
        return 1;
    }

    printf("Result: %lf\n", result);
     
}
