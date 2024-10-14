#include <stdio.h>
#include <stdlib.h>
int main(void) {

  int n;  
  printf("\nВведіть кількість стрічок для запису у файл (не менше 10)\n");
  scanf ("%d", &n);
  if (n<10) {
    printf("\nКількість стрічок НЕ МЕНШЕ 10 :D\n");
    return 0;
  }  
  FILE * pFile;
  char name [256];
  pFile = fopen ("mfile.txt","w");
  for (int i=0 ; i<n ; i++) {
    printf("Введіть стрічку №:%d\n", i+1);
    scanf ("%s", name);
    fprintf (pFile, "%s\n", name);
  }
  fclose (pFile);
  return 0;
}
