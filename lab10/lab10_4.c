#include <stdio.h>

double plus(double a, double b){
  return a+b;
}
double minus(double a, double b){
  return a-b;
}
double multiply(double a, double b){
  return a*b;
}
double divide(double a, double b){
  return b ? a/b : 0;
}

int main(void){
  double a, b, result;
  char op;
  double (*ops[4])(double, double) = {plus, minus, multiply, divide};
  printf("ввід типу 1.28+3.14: ");
  scanf("%lf%c%lf", &a,&op,&b);
  if(op == '+') result = ops[0](a,b);
  else if(op == '-') result = ops[1](a,b);
  else if(op == '*') result = ops[2](a,b);
  else if(op == '/') result = ops[3](a,b);
  printf("результат: %lf", result);
 return 0;
}