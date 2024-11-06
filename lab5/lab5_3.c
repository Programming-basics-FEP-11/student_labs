#include <stdio.h>

int main(void){
    int a, b, c, temp;
    printf("First side:");
    scanf("%d", &a);
    printf("Second side:");
    scanf("%d", &b);
    printf("Third side:");
    scanf("%d", &c);
    
    if(a + b > c && a + c > b && b + c > a){
        if(a == b && b == c){
            printf("трикутник рівносторонній\ns");
        }
        else if(a == b || a == c || b == c){
            printf("трикутник рівнобедренний\n");
        }
        else{
            printf("трикутник різносторонній\n");
        }
        
        if(a >= b && a >= c) {
            temp = a;
            a = c; 
            c = temp;

        }
        else if(b >= a && b >= c){
            temp = b;
            b = c;
            c = temp;
        }

        if(c*c == a*a + b*b) printf("трикутник прямокутний\n");
        else if (c*c < a*a + b*b) printf("трикутник гострокутний\n");
        else printf("трикутник тупокутний\n");
    }
    else{
     printf("такого трикутника не існує\n");
    }
    return 0;
}
