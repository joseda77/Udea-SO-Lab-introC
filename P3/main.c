#include <stdio.h>
#include <multi.h>

void main(){
    int number1;
    int number2;
    int result;
    while (1)
    {
        printf("Ingrese el primer número: ");
        scanf("%d",&number1);
        printf("Ingrese el segundo número: ");
        scanf("%d",&number2);
        result = multi(number1, number2);
        printf("El resultado es: %d \n", result);
    }
}
