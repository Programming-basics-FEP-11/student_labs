#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
    int num = 255;
    float fnum = 222.123;
    char character = 'A';
    const char* str = "Hello, World!";
    void* ptr = &num;

    printf("Decimal format: %d\n", num);
    printf("Octal format: %o\n", num);
    printf("Hexadecimal format: %x\n", num);

    printf("Floating-point format: %f\n", fnum);
    printf("Exponential format: %e\n", fnum);
    printf("Flexible format: %g\n", fnum);

    printf("Character: %c\n", character);
    printf("String: %s\n", str);
    printf("Pointer: %p\n", ptr);
    printf("Binary: %b\n", num);

    int n;
    printf("\nEnter the number of students (up to %d): ", 100);
    scanf_s("%d", &n);
    getchar(); 

    if (n <= 0 || n > 100) {
        printf("Invalid number of students. Exiting...\n");
        return 1;
    }

    char names[100][50];
    char emails[100][50];

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name and initials: ");
        fgets(names[i], 50, stdin);

        printf("Enter email: ");
        fgets(emails[i], 50, stdin);

        names[i][strcspn(names[i], "\n")] = 0;
        emails[i][strcspn(emails[i], "\n")] = 0;
    }

    printf("\n%-5s %-30s %-30s\n", "Number", "Name, Initials", "Email");
    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-5d %-30s %-30s\n", i + 1, names[i], emails[i]);
    }

   
}
