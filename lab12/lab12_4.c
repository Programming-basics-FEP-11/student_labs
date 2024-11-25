#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_file(const char *src_filename, const char *dest_filename) {
    FILE *src_file, *dest_file;
    char buffer[1024];
    size_t bytes_read;

    src_file = fopen(src_filename, "rb");
    if (src_file == NULL) {
        printf("Не вдалося відкрити файл %s для зчитування.\n", src_filename);
        return;
    }

    dest_file = fopen(dest_filename, "wb");
    if (dest_file == NULL) {
        printf("Не вдалося відкрити файл %s для запису.\n", dest_filename);
        fclose(src_file);
        return;
    }
    
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), src_file)) > 0) {
        fwrite(buffer, 1, bytes_read, dest_file);
    }

    fclose(src_file);
    fclose(dest_file);
    printf("Файл %s успішно скопійовано в %s\n", src_filename, dest_filename);
}

int main() {
    copy_file("file1.pdf", "copy_file1.pdf");
    copy_file("file2.jpg", "copy_file2.jpg");

    return 0;
}