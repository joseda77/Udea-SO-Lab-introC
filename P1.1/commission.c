#include <stdio.h>
#include "commission.h"

float commission(float trim_sales){
    float percent5 = 0.05;
    float percent7 = 0.07;
    float percent10 = 0.1;
    float total = 0;
    if (0 <= trim_sales && trim_sales <= 20000)
    {
        total = trim_sales * percent5;
    }else if (20000 < trim_sales && trim_sales <= 50000)
    {
        total = (trim_sales * percent7) + 1000;
    }else if (trim_sales > 50000)    
    {
        total = (trim_sales * percent10) + 3100; 
    }
    return total;
}