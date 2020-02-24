#include <stdio.h>
#include "commission.h"

void main(){
    float total;
    int sales; // numero a leer
    printf("Ingrese el número de ventas:");
    scanf("%d", &sales);
    total = sales + commission(sales);
    printf("El valor de la comisión es: %f \n", commission(sales));
    printf("El total de la venta es: %f \n", total);
}