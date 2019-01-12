/*
演習問題1 次のような頭部をもつ、与えられた 整数から0までの
整数を画面上に出力する関数 を作成せよ。 void prnum(int * x)
例えば int z=10; prnum(&z); とすると、画面上に 
>10 9 8 7 6 5 4 3 2 1 0
と表示される。
*/
#include <stdio.h>
void prnum(int *x){
    int i;
    for(i=*x;i>=0;i--){
        printf("%d\n",i);
    }
}
int main (){
    int a = 10;
    prnum(&a);
}
