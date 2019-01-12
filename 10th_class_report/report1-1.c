#include <stdio.h>
#include "report1-1_function.h"
int main (){
    int inputa,inputb,result;
    printf("数字1を入力\n");
    scanf("%d",&inputa);
    printf("数字2を入力\n");
    scanf("%d",&inputb);

    result = multiply(inputa,inputb);
    printf("掛け算の結果は%dです。\n",result);
    return 0;
}