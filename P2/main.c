#include <stdio.h>
#include "row.h"

int main(){
    int number; // numero a leer
    printf("Ingrese el número de renglones:");
    scanf("%d", &number);
    row(number);
    return 0;
}