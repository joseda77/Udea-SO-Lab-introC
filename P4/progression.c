#include <stdio.h>
#include <math.h>


double progression(double x, double n){
    double sum = 0;
    for(double i=0; i<=n; i++){
        printf("%d^%d ",(int)x, (int)i);
        if(i!=n){
            printf("+ ");
        }
    sum = sum + pow(x, i);
  }
  return sum;
}