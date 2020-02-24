#include <stdio.h>
#include "multiplication.h"

void main(){
    int number; // numero a leer
    printf("Ingrese el número máximo:");
    scanf("%d", &number);
    multiplication(number);
}