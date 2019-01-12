/*
演習問題１: 2つの正整数を引数としそれらの最大公約 
数を返却する関数を作成せよ。main関数も作成し
分割コンパイルをしてみよ。

*/

#include <stdio.h>
#include "report2_function.h"
int main (){
    int a,b,result;
    printf("1個目数字を入力\n");
    scanf("%d",&a);
    printf("2個目数字を入力\n");
    scanf("%d",&b);

    result = hcm(a,b);

    printf("最大公約数は%dです。\n",result);
    return 0; 
    
}

    