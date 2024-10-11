// #include <stdio.h>
// int main(void) {
//   printf("Вид трикутника\n");
//   int a, b, c;
//   printf("\nВведіть сторону а:");
//   scanf("%d", &a);
//   printf("\nВведіть сторону b:");
//   scanf("%d", &b);
//   printf("\nВведіть сторону с:");
//   scanf("%d", &c);
//   if (a == b && a == c && b == c) {
//     printf("\nТрикутник рівнобічний\n");
//   }
//     else if (a + b <= c || b + c <= a || a + c <= b){
//       printf("\nТрикутник не утворюється");
//       return 0;
//     }
//   else if (a == c || a == b || b ==c) {
//     printf("\nТрикутник рівнобедренний\n");
//     }
//   else {
//     printf("\nТрикутник різносторонній\n");
//   }
//   if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
//     printf("\nТрикутник прямокутний");
//   }
//   else if (a*a + b*b < c*c || a*a + c*c < b*b || b*b + c*c < a*a){
//     printf("\nТрикутник тупокутний");
//   }
//   else {
//     printf("\nТрикутник гострокутний");
//   }
//   }