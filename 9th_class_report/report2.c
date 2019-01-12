/*
レポート課題２：以下のような関数頭部をもち、引数xとyをかけた値を返却 する関数を書け。 
int multi(int x, int y) その関数を呼び出すmain関数と、実行結果も書け。
*/
#include <stdio.h>
int multi(int x,int y);
int main (){
    int mult;
    mult = multi(10,2);
    printf("掛け算の結果は%dです。\n",mult);
    return 0;
}
int multi(int x,int y){
    int mul;
    mul = x * y;
    return mul;
}