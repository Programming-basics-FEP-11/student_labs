#include <stdio.h>
int main()
{
     int a;              
     int *ptr = &a;    
    printf("Введіть число: ");
    scanf("%d", ptr);  
    printf("Введене число: %d\n", *ptr);           
    printf("Адреса числа: %p\n", (void*)&a); 
}