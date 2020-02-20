#include <stdio.h>
#include <progression.h>


void main(){
    double number1; // numero a leer
    double number2;
    double result = 0;
    printf("Ingrese un X:");
    scanf("%le", &number1);
    printf("Ingrese un N:");
    scanf("%le", &number2);
    result = progression(number1, number2);
    printf("\n");
    printf("Este es su resultado: %d", (int)result);
}