/*
自作問題２ : 2つの正整数を引数としそれらの引き算の
結果を返却する関数を作成せよ。
main関数も作成し分割コ ンパイルをしてみよ。

*/
#include <stdio.h>
#include "report1-2_function.h"
int main (){
    int inputa,inputb,result;
    printf("数字1を入力\n");
    scanf("%d",&inputa);
    printf("数字2を入力\n");
    scanf("%d",&inputb);

    result = subtract(inputa,inputb);
    printf("引き算の結果は%dです。\n",result);
    return 0;
}