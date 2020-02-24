#include <stdio.h>
#include <math.h>
#include <stdlib.h> 



int mayor(int num1, int num2) {
    if(num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int menor(int num1, int num2) {
    if(num1 <= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int generar_aleatorios(int num1, int num2) {
    int num, M, m;
    
    M = mayor(num1, num2);
    m = menor(num1, num2);    
    num = rand()%(M - m + 1) + m;
    return num;
}

void generate_question(){
    int number1;
    int number2;
    int result;
    int entry;
    while (1)
    {
        number1 = generar_aleatorios(1,10);
        number2 = generar_aleatorios(1,10);
        printf("¿Cuanto es %d por %d?: \n ", number1, number2);
        scanf("%d", &entry);
        result = number1 * number2;      
        while (result!= entry){
            printf("No. Por favor intenta nuevamente. \n ");
            scanf("%d", &entry);
        }
        printf("Muy bien! \n");      
        
    }
}