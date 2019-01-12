/*
演習問題5 関数の外で宣言されたint型整数a,bがあるとき、
aの2乗をbへ格納する関数を作成せよ。
関数にはa,b のアドレスを与えるとする。
*/
#include <stdio.h>
#include <math.h>
void sum(int *x, int *y);
int main (){
    int a,b,c;
    printf("aを入力: ");
    scanf("%d",&a);
    printf("bを入力: ");
    scanf("%d",&b);
    sum(&a,&b);
    printf("result : %d\n",b);
}
void sum (int *x, int *y){
    *y = pow(*x,2);
}