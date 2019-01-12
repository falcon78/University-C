/*
レポート課題５:　以下のような関数頭部をもち、キーボードから入力された整 
数を2倍した値を戻す関数を書け。 int get2( void ) 
その関数を呼び出すmain関数と、実行結果も書け。
*/
#include <stdio.h>
int get2(void);
int main(){
    int b;
    b = get2();
    printf("2倍の数字は%dです。\n",b);
    return 0;
}

int get2 (void){
    int a;
    printf("整数を入力");
    scanf("%d",&a);
    a = a*2;
    return a;
}