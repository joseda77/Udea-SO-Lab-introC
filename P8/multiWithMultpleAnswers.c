#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int mayor(int num1, int num2)
{
    if (num1 >= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int menor(int num1, int num2)
{
    if (num1 <= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int generar_aleatorios(int num1, int num2)
{
    int num, M, m;

    M = mayor(num1, num2);
    m = menor(num1, num2);
    num = rand() % (M - m + 1) + m;
    return num;
}

void generate_question()
{
    int number1;
    int number2;
    int result;
    int entry;
    int message;
    while (1)
    {
        number1 = generar_aleatorios(1, 10);
        number2 = generar_aleatorios(1, 10);
        printf("¿Cuanto es %d por %d?: \n", number1, number2);
        scanf("%d", &entry);
        result = number1 * number2;
        while (result != entry)
        {
            message = generar_aleatorios(0, 3);
            switch (message)
            {
            case 0:
                printf("No. Por favor trata de nuevo \n");
                break;
            case 1:
                printf("Incorrecto. Trata una vez más.\n");
                break;
            case 2:
                printf("No te rindas! \n");
                break;
            default:
                printf("No. Trata de nuevo \n");
            }
            scanf("%d", &entry);
        }
        message = generar_aleatorios(0, 3);

        switch (message)
        {
        case 0:
            printf("Muy bien!. \n");
            break;
        case 1:
            printf("Excelente! \n");
            break;
        case 2:
            printf("Buen trabajo! \n");
            break;
        default:
            printf("Sigue haciéndolo bien! \n");
        }
    }
}