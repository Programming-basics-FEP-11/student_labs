#include <stdio.h>

int str_length(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const char* string = "Hello, world!";
    printf("Length: %d\n", str_length(string));
    return 0;
}
