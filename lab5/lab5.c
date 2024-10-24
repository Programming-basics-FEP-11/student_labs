#include <stdio.h>

void triangleType(int a, int b, int c) {
    if (a == b && b == c) {
        printf("Equilateral triangle\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles triangle\n");
    }
    else {
        printf("Scalene triangle\n");
    }

    int a2 = a * a, b2 = b * b, c2 = c * c;
    if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) {
        printf("Right triangle\n");
    }
    else if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2) {
        printf("Acute triangle\n");
    }
    else {
        printf("Obtuse triangle\n");
    }
}

void printNumberInWords(int number) {
    const char* ones[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    const char* teens[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    const char* tens[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    const char* hundreds[] = { "", "one hundred", "two hundred", "three hundred", "four hundred", "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred" };

    int h = number / 100;
    int t = (number / 10) % 10;
    int o = number % 10;

    if (h > 0) {
        printf("%s ", hundreds[h]);
    }

    if (t == 1) {
        printf("%s\n", teens[o]);
    }
    else {
        if (t > 1) {
            printf("%s ", tens[t]);
        }
        if (o > 0) {
            printf("%s\n", ones[o]);
        }
    }
}


int main() {
   
    //Task 1
    /*int a, b;

    printf("Enter the first number: ");
    scanf_s("%d", &a);
    printf("Enter the second number: ");
    scanf_s("%d", &b);

    (a == b) ? printf("The numbers are equal.\n") : printf("Result: %d\n", (a > b) ? a : b);*/


   

    //Task 2
        /*int a, b, c;

            printf("Enter the lengths of three sides of the triangle: ");
        scanf_s("%d %d %d", &a, &b, &c);

        triangleType(a, b, c);*/

        
    

    

    //Task 3
        int number;

    printf("Enter a three-digit number: ");
        scanf_s("%d", &number);

        if (number >= 100 && number <= 999) {
            printNumberInWords(number);
        }
        else {
        printf("Please enter a three-digit number.\n");
        }

        
  

}


