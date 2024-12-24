#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char str[300], *k = str;
  int word;
  int i = 0;
  printf("\nВведіть прислів'я або афоризм англійською, що містить 7+ слів:\n"); 
 scanf("%[^\n]s", str);
   while (*k != '\0') { 
 if (*k == ' ' || *k == '\0') { 
 word++; 
 } 
k++;
}
  if (word <= 6) { 
 printf("Речення містить менше 7 слів."); 
 return 0; 
 } 
  int begin = 0, end = 0, j;
  for(i = 0; i<=strlen(str); i++){
    if(str[i]==' ' || i == strlen(str)){
      end = i-1;
      for(j=end; j>=begin; --j)
        printf("%c", str[j]);
      printf("\n");
       begin = end+1;
    } 
  }
  }
