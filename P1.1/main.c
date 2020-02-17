#include <stdio.h>
#include "commission.h"

int main(){
    float total;
    int sales; // numero a leer
    printf("Ingrese el número de ventas:");
    scanf("%d", &sales);
    total = sales + commission(sales);
    printf("El total de la venta es: %f", total);
    return 0;
}