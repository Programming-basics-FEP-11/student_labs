#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int result;

    // Арифметичні оператори
    printf("Арифметичні оператори:\n");
    printf("a + b = %d\n", a + b); // Додавання
    printf("a - b = %d\n", a - b); // Віднімання
    printf("a * b = %d\n", a * b); // Множення
    printf("a / b = %d\n", a / b); // Ділення
    printf("a %% b = %d\n", a % b); // Остача від ділення

    // Інкремент та декремент
    printf("a++ = %d\n", a++); // Постфіксний інкремент
    printf("++a = %d\n", ++a); // Префіксний інкремент
    printf("b-- = %d\n", b--); // Постфіксний декремент
    printf("--b = %d\n", --b); // Префіксний декремент

    // Логічні оператори
    int x = 1, y = 0;
    printf("\nЛогічні оператори:\n");
    printf("x && y = %d\n", x && y); // Логічне І
    printf("x || y = %d\n", x || y); // Логічне АБО
    printf("!x = %d\n", !x);        // Логічне HE

    printf("\nПобітові операції: \n");
       result = ~a & b;
       printf("A & B = %d (Побітове AND)\n", result);
       result = ~a | b;
       printf("The result in binary is: %b\n", result);
       printf("A | B = %d (Побітове OR)\n", result);
       printf("The result in binary is: %b\n", result);
       result = ~a ^ b;
       printf("A ^ B = %d (Побітове XOR)\n", result);
       printf("The result in binary is: %b\n", result);
       result = ~a;
       printf("~A = %d (Побітове NOT)\n", result);
       printf("The result in binary is: %b\n", result);
       result = ~a << 1;
       printf("A << 1 = %d (Зсув вліво на 1 біт)\n", result);
       printf("The result in binary is: %b\n", result);
       result = ~a >> 1;
       printf("A >> 1 = %d (Зсув вправо на 1 біт)\n", result);
       printf("The result in binary is: %b", result);

}