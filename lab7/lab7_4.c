#include <stdio.h>

double bis_method(int N, int A, double a, double b){
    double c;
    while((b-a) >= 0.0001){
        c = (a+b)/2;    
        if(N*c+A == 0) break;

        if(N*c+A > 0){
            b = c;
        }
        else{
            a = c;
        }
    }
    return c;
}
int main(void) {
  printf("Корінь: %.4lf\n", bis_method(4, 17, -100, 100));
  return 0;
} 
 
