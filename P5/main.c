#include <stdio.h>
#include <series.h>

void main(){
    double number1; // numero a leer
    double number2;
    float result = 0;
    printf("Ingrese un X:");
    scanf("%le", &number1);
    printf("Ingrese el número de terminos:");
    scanf("%le", &number2);
    result = series(number1, number2);
    printf("\n");
    printf("Este es el resultado de las series: %f", (float)result);
    printf("\n");
}