#include <stdio.h>
typedef struct numInfo{
        int dividend;
        int divisor;
        int iqut;
        double rqut;
    }numInfo;
void mqr(numInfo* x);
int main (void){
    numInfo a;
    a.dividend = 7;
    a.divisor = 3;
    mqr(&a);
    printf("integr quotient : %d\n",a.iqut);
    printf("real quotient : %1f\n",a.rqut);
    return 0;
}

void mqr(numInfo* x){
    double r_dividend = (*x).dividend;
    double r_divisor = (*x).divisor;
     
    (*x).iqut = (*x).dividend / (*x).divisor;
    (*x).rqut = r_dividend / r_divisor;
}