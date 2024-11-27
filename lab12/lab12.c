#include <stdio.h>
#include <string.h>

#define MAX_LINES 50
#define MAX_LENGTH 100

void writeToFile() {
    FILE* file = fopen("mfile.txt", "w");
    if (!file) {
        printf("Error opening file for writing.\n");
        return;
    }

    char line[MAX_LENGTH];
    printf("Enter at least 10 lines (type 'END' to stop):\n");
    int count = 0;

    while (count < 10) {
        fgets(line, MAX_LENGTH, stdin);
        if (strcmp(line, "END\n") == 0) break;
        fputs(line, file);
        count++;
    }

    fclose(file);
    printf("Lines written to mfile.txt\n");
}

void processFile() {
    FILE* file = fopen("mfile.txt", "r");
    if (!file) {
        printf("Error opening mfile.txt for reading.\n");
        return;
    }

    char lines[MAX_LINES][MAX_LENGTH];
    int lineCount = 0;
    int totalChars = 0;

    printf("Contents of mfile.txt:\n");
    while (fgets(lines[lineCount], MAX_LENGTH, file) && lineCount < MAX_LINES) {
        printf("%s", lines[lineCount]);
        totalChars += strlen(lines[lineCount]) - 1;  
        lineCount++;
    }
    fclose(file);

    printf("\nTotal lines: %d\n", lineCount);
    printf("Average characters per line: %.2f\n", (float)totalChars / lineCount);

    file = fopen("xfile.txt", "w");
    if (!file) {
        printf("Error opening xfile.txt for writing.\n");
        return;
    }

    for (int i = lineCount - 1; i >= 0; i--) {
        for (int j = strlen(lines[i]) - 1; j >= 0; j--) {
            if (lines[i][j] != '\n') {
                fputc(lines[i][j], file);
            }
        }
        fputc('\n', file);
    }

    fclose(file);
    printf("Reversed content written to xfile.txt\n");
}

void copyFiles(const char* src, const char* dest) {
    FILE* sourceFile = fopen(src, "rb");
    if (!sourceFile) {
        printf("Error opening %s for reading.\n", src);
        return;
    }

    FILE* destFile = fopen(dest, "wb");
    if (!destFile) {
        fclose(sourceFile);
        printf("Error opening %s for writing.\n", dest);
        return;
    }

    char buffer[1024];
    size_t bytesRead;

    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);
    printf("File %s copied to %s\n", src, dest);
}

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Write lines to mfile.txt\n");
        printf("2. Process mfile.txt and write reversed content to xfile.txt\n");
        printf("3. Copy .pdf or .jpg files\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);
        getchar();  

        switch (choice) {
        case 1:
            writeToFile();
            break;
        case 2:
            processFile();
            break;
        case 3: {
            char src[100], dest[100];
            printf("Enter source file path: ");
            fgets(src, 100, stdin);
            src[strcspn(src, "\n")] = 0; 

            printf("Enter destination file path: ");
            fgets(dest, 100, stdin);
            dest[strcspn(dest, "\n")] = 0;  

            copyFiles(src, dest);
            break;
        }
        case 4:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

  
}
