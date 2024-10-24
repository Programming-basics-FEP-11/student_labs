#include <stdio.h>
#include <math.h>


int main() {
    //Task 1
    
    //int a = 12, b = 5;

    //printf("Arithmetic Operators:\n");
    //printf("a + b = %d\n", a + b);
    //printf("a - b = %d\n", a - b);
    //printf("a * b = %d\n", a * b);
    //printf("a / b = %d\n", a / b);
    //printf("a %% b = %d\n", a % b);

    //printf("\nLogical Operators:\n");
    //printf("a && b = %d\n", a && b);  
    //printf("a || b = %d\n", a || b);  
    //printf("!a = %d\n", !a);         

   
    //printf("\nBitwise Operators:\n");
    ///*printf("Binary representation of a: %b", a);
    //printf("Binary representation of b: %b", b);*/

    //printf("a & b = %b\n", a & b);     
    //printf("a | b = %b\n", a | b);    
    //printf("a ^ b = %b\n", a ^ b);     
    //printf("~a = %b\n", ~a);          
    //printf("a << 1 = %b\n", a << 1);   
    //printf("a >> 1 = %b\n", a >> 1);   
    //





    //Task 2

    
    /*int num;
    int* ptr;

    printf("Enter an integer: ");
    scanf_s("%d", &num);

   
    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value accessed through pointer: %d\n", *ptr);
    */
    




    //Task 3
    
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b, c: ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.3lf\n", root1);
        printf("Root 2 = %.3lf\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root = %.3lf\n", root1);
    }
    else {
        printf("Roots are complex.\n");
    }
    
}
