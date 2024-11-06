#include <stdio.h>

int main(void) {
    char surname[30];
    char name[30];
    char email[30]; 
    char phone[15]; 
    char favoritecolor[30];

    // Ввод данных
    printf("Enter your surname: \t");
    scanf("%29s", surname);  
    printf("Enter your name: \t");
    scanf("%29s", name); 
    printf("Enter your email: \t");
    scanf("%29s", email);  
    printf("Enter your phone: \t");
    scanf("%14s", phone);  
    printf("Enter your favorite color: \t");
    scanf("%29s", favoritecolor); 
    printf("\n%-20s %-20s %-30s %-20s %-25s\n", "Surname", "Name", "Email", "Phone", "Favorite color");
    printf("------------------------------------------------------------------------------------------------\n");
    
    printf("%-20s %-20s %-30s %-20s %-25s\n", surname, name, email, phone, favoritecolor);

    return 0;
}
 
