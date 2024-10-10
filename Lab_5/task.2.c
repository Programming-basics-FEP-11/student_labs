
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Довжина сторони a: ");
    scanf("%d", &a);
    
    printf("Довжина сторони b: ");
    scanf("%d", &b);
    
    printf("Довжина сторони c: ");
    scanf("%d", &c);
    
    if (a + b > c && a + c > b && b + c > a) {
    
        if (a == b && a == c) {
            printf("Трикутник рівносторонній\n"); }
        
        else if (a != b && a != c && b != c) {
            printf("Трикутник різносторонній\n"); }
        
        else if (a == b || a == c || b == c) {
            printf("Трикутник рівнобедрений\n"); }
        
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            printf("Трикутник прямокутний\n"); }
            
        else if (a*a + b*b > c*c || a*a + c*c > b*b || b*b + c*c > a*a) {
            printf("Трикутник гострокутний\n"); }
            
        else if (a*a + b*b < c*c || a*a + c*c < b*b || b*b + c*c < a*a) {
            printf("Трикутник тупокутний\n"); }
    }
    else { printf("Трикутника не існує"); }
    return 0;
    
}