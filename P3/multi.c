#include <stdio.h>
#include <math.h>

int multi(int number1, int number2){
    int areMultiple = number2 % number1;
    if(areMultiple == 0){
        return 1;
    }else{
        return 0;
    }
}