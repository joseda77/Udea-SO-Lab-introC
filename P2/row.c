#include <stdio.h>

void row(int rowNumber){
    int par = rowNumber%2;
    int flag = 0;
    for (int i=0; i<=rowNumber; i++){
       for (int j=0; j<=i; j++){
           if(flag == 1){
               printf("%s", "0");
               flag = 0; 
           }else if(flag == 0){
               printf("%s", "1");
               flag = 1; 
           }
        }
        if(i%2 == 0){
            flag = 1;
        }else
        {
            flag = 0;
        }
        
        printf("\n");
    }
}
