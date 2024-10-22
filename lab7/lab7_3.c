#include <stdio.h>
#include <math.h>
int A = 17;
int N = 1;

double f(double x) {
  return (N*x)+A;
}
int main(){
  int n = 0;
  double a, b, c, eps;
  
  printf ("Початковий інтервал a=");
  scanf ("%lf", &a);
  printf ("Кінцевий інтервал b=");
  scanf ("%lf", &b);
  printf("Точніcть eps=");
  scanf ("%lf", &eps);

  if (f(a) * f(b) >= 0) {
      printf("Кореня немає в цьому інтервалі або їх більше одного.\n");
      return -1;
  }
  do {
    c = (a+b)/2;
    if (f(c)*f(a)<=0) b=c;
    else a=c;
    n += 1;
  } while (fabs (a-b) >= eps);
       printf ("Роз'вязок x=%lf\n", c);
 
       return 0;
}

  
