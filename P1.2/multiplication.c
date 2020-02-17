#include <stdio.h>

int multiplication(int number){
    int flag = 0;
    for(int i=0; i<= number; i++){
        for (int j=0; j <= number; j++){
            int total = i *j;
            printf("%dX%d=%d, ",i, j, total);
        }
    }
    return 0;
}