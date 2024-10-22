#include <stdio.h>

double f(double x){
    double N = 4, A = 17;
    return N*x+A;
}
double bis_method(){
    double c, a = -100, b = 100;
    while((b-a) >= 0.0001){
        c = (a+b)/2;
        if(f(c) == 0) break;
        
        if(f(c) * f(a) < 0){
            b = c;
        }
        else{
            a = c;
        }
        
    }
    return c;
}
int main(void) {
  printf("Корінь: %.4lf\n", bis_method());
  return 0;
} 
 
