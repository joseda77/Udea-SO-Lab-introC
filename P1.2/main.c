#include <stdio.h>
#include "multiplication.h"

int main(){
    int number; // numero a leer
    printf("Ingrese el número máximo:");
    scanf("%d", &number);
    multiplication(number);
}