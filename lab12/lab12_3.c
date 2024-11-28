#include <stdio.h>

void copyFile(const char *sourcePath, const char *destinationPath) {
  FILE *sourceFile = fopen(sourcePath, "rb");
  if (!sourceFile) {
    perror("Error while opening file");
    return;
  }

  FILE *destFile = fopen(destinationPath, "wb");

  if (!destFile) {
    perror("Error while creating file");
    fclose(sourceFile);
    return;
  }

  char dataBuffer[1024];
  size_t bytesRead;

  while ((bytesRead = fread(dataBuffer, 1, sizeof(dataBuffer), sourceFile)) >
         0) {
    fwrite(dataBuffer, 1, bytesRead, destFile);
  }

  fclose(sourceFile);
  fclose(destFile);
  printf("file '%s' was copied to '%s'.\n", sourcePath, destinationPath);
}

int main() {
  char sourceFileName[100], destFileName[100];
  printf("Enter start file: ");
  scanf("%s", sourceFileName);
  printf("Enter end file: ");
  scanf("%s", destFileName);

  copyFile(sourceFileName, destFileName);
  return 0;
}
