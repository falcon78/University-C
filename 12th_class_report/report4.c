/*
演習問題4 関数の外で宣言されたint型整数a,bがあるとき、
aとbの値の和をaに格納する関数を作成せよ。
関数 にはa,bのアドレスを与えるとする。
*/
#include <stdio.h>
void sum(int *x, int *y);
int main (){
    int a,b,c;
    printf("aを入力: ");
    scanf("%d",&a);
    printf("bを入力: ");
    scanf("%d",&b);
    sum(&a,&b);
    printf("sum : %d\n",a);
}
void sum (int *x, int *y){
    *x = *x+*y;
}