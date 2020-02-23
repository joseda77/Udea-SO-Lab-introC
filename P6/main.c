#include <stdio.h>
#include <reverse.h>

void main(){
    int number1; // numero a leer
    int result;
    printf("Ingrese un numero:");
    scanf("%d", &number1);
    result = reverse(number1);
    printf("\n");
    printf("Este es el resultado de las series: %d", result);
    printf("\n");
}