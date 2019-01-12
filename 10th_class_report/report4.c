/*
演習問題３ : 関数funcは、関数の中でstaticな変数xを宣言し
1で初期化し、xのインクリメントを行った後、xの値を 返却するものとする。
funcを複数回呼ぶことによりxの値 がどのように変化するかを確認せよ。

*/
#include <stdio.h>
#include "report4_function.h"
int main (){
    printf("%d \n",staticFunction());
    printf("%d \n",staticFunction());
    printf("%d \n",staticFunction());
    printf("%d \n",staticFunction());
    printf("%d \n",staticFunction());
}
