/*
演習問題２: 1つの正整数を引数とし、それが素数なら1 を、
それが合成数なら0を返却する関数を作成せよ。 
main関数も作成し分割コンパイルをしてみよ。
*/
#include <stdio.h>
#include "report3_function.h"
int main() {
    int number,result;
    printf("数字を入力");
    scanf("%d",&number);

    result = isPrime(number);

    if (result == 1){
        printf("\n %d  ",result);
        printf("素数です。\n");
    }
    else{
        printf("\n %d  ",result);
        printf("合成数です。\n");
    }
    return 0;
}