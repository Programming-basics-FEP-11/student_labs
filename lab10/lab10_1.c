#include <stdio.h>

int len(char* str) {
    if (*str == '\0') { 
        return 0;
    }
    return 1 + len(str + 1); 
}

int main() {
    char str[] = "I love music";
    printf("Довжина стрічки: %d\n", len(str));
    return 0;
}